#include <stdio.h>
#include <string.h>
#include <conio.h>
#define size 10
char stack[size];
int tos = 0, ele;
void push();
char pop();
void show();
int isempty();
int isfull();
char infix[30], output[30];
int prec(char);

void push(int ele)
{
    stack[tos] = ele;
    tos++;
}

char pop()
{
    tos--;
    return (stack[tos]);
}

void show()
{
    int x = tos;
    printf("--The Stack elements are.....");
    while (x != 0)
        printf("%c, ", stack[--x]);
}

int prec(char symbol)
{
    if (symbol == '(')
        return 0;
    if (symbol == ')')
        return 0;
    if (symbol == '+' || symbol == '-')
        return 1;
    if (symbol == '*' || symbol == '/')
        return 2;
    if (symbol == '^')
        return 3;
    return 0;
}