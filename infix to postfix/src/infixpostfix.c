#include <stdio.h>
#include <string.h>
#include <conio.h>
#include "C:\Users\Sparkles\Desktop\aaa_lab\final\infix to postfix\include\infixpostfix.h"

#define size 10
char stack[size];
int tos = 0, ele;
char infix[30], output[30];


void main()
{
    int i = 0, j = 0, length;
    char temp;
    printf("\nEnter an infix expression:");
    scanf("%s", infix);
    printf("\nThe infix expresson is %s", infix);
    length = strlen(infix);
    for (i = 0; i < length; i++)
    {
        if (infix[i] != '+' && infix[i] != '-' && infix[i] != '*' && infix[i] != '/' && infix[i] != '^' && infix[i] != ')' && infix[i] != '(')
        {
            output[j++] = infix[i];
            printf("\nThe element added to Q is:%c", infix[i]);
        }
        else
        {
            if (tos == 0)
            {
                push(infix[i]);
                printf("\nThe pushed element is:%c", infix[i]);
            }
            else
            {
                if (infix[i] != ')' && infix[i] != '(')
                {
                    if (prec(infix[i]) <= prec(stack[tos - 1]))
                    {
                        temp = pop();
                        printf("\n the poped element is :%c", temp);
                        output[j++] = temp;
                        push(infix[i]);
                        printf("\n The pushed element is :%c", infix[i]);
                        show();
                    }
                    else
                    {
                        push(infix[i]);
                        printf("\nThe pushed element is:%c", infix[i]);
                        show();
                    }
                }
                else
                {
                    if (infix[i] == '(')
                    {
                        push(infix[i]);
                        printf("\nThe pushed-- element is:%c", infix[i]);
                    }
                    if (infix[i] == ')')
                    {
                        temp = pop();
                        while (temp != '(')
                        {
                            output[j++] = temp;
                            printf("\nThe element added to Q is:%c", temp);
                            printf("\n the poped element is :%c", temp);
                            temp = pop();
                        }
                    }
                }
            }
        }
        printf("\nthe infix expression is: %s", output);
    }
    while (tos != 0)
    {
        output[j++] = pop();
    }
    printf("the infix expression is: %s\n", output);
    getch();
}

