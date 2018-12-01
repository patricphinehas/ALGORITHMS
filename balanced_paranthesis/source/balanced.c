#include<stdlib.h>
#include<stdio.h>
#include<conio.h>

void create();
void push(char);
char pop();
struct node
    {
        char data;
        struct node*next;
    };

typedef struct node stack;

stack *top;

void main()
    {
    int i,j;
    char str[100];
    int flag=0;
    char d;
    create();
    printf("Enter an expression to check whether the paranthesis is balanced:\n");
    gets(str);
    i=0;
    while(str[i]!='\0')
    {
        if(str[i]=='(')
            push(str[i]);
        if(str[i]==')')
        {
            d=pop();
            if(d!='(')
            {
                flag=1;
                break;
            }
        }
        i++;
    }


    if((top->next!=NULL)||(flag==1))
    {printf("Paranthesis not balanced\n");}
    else
    {printf("Paranthesis is balanced");}
    getch();
}


void create()
{
    top=malloc(sizeof(stack));
    top->next=NULL;
}
char pop()
{
stack *tmp,*t;
if(top->next==NULL)
return '$';
else
{
tmp=top->next;
top->next=top->next->next;
t=tmp;
free(tmp);
return(t->data);
}
}
void push(char d)
{
stack *tmp;
tmp=malloc(sizeof(tmp));
tmp->data=d;
tmp->next=top->next;
top->next=tmp;
}