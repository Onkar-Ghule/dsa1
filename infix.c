#include<stdio.h>
#include"statics.h"

void postfixconv(char infix[], char postfix[]);

void main()
{
    char infix[10], postfix[10];
    int i, n, c;

    printf("How many data elements: ");
    scanf("%d", &n);

    printf("Enter the data: ");
    for (i = 0; i < n; i++)
    {
        scanf(" %c", &infix[i]);  // Use %c to read characters
    }

    printf("Infix expression: ");
    for (i = 0; i < n; i++)
    {
        printf("%c", infix[i]);
    }

    postfixconv(infix, postfix);

    printf("\nPostfix expression: ");
    for (i = 0; postfix[i] != '\0'; i++)
    {
        printf("%c", postfix[i]);
    }
}

void postfixconv(char infix[], char postfix[])
{
    int i, c, j = 0;
    struct stack sp;

    ssinit(&sp);

    for (i = 0; infix[i] != '\0'; i++)
    {
        if (infix[i] == '(')
        {
            sspush(&sp, infix[i]);
        }
        else if (infix[i] == '*' || infix[i] == '+' || infix[i] == '/' || infix[i] == '-' || infix[i] == '^')
        {
            if (ssisempty(&sp))
            {
                sspush(&sp, infix[i]);
            }
            else
            {
                while (!ssisempty(&sp) && priority(sttop(&sp)) >= priority(infix[i]))
                {
                    postfix[j] = sspop(&sp);
                    j++;
                }
                sspush(&sp, infix[i]);
            }
        }
        else if (infix[i] == ')')
        {
            while (!ssisempty(&sp) && sttop(&sp) != '(')
            {
                postfix[j] = sspop(&sp);
                j++;
            }
            sspop(&sp); // Pop the '('
        }
        else
        {
            postfix[j] = infix[i];
            j++;
        }
    }

    while (!ssisempty(&sp))
    {
        postfix[j] = sspop(&sp);
        j++;
    }

    postfix[j] = '\0';
}

char sttop(struct stack *sp)
{
    return sp->item[sp->top];
}

int priority(char c)
{
    int m;

    if (c == '(')
        m = 0;
    else if (c == '+' || c == '-')
        m = 1;
    else if (c == '*' || c == '/')
        m = 2;
    else if (c == '^')
        m = 3;
    else
        m = 0;

    return m;
}

