//This is a C Program to Implement two Stacks using a Single Array & Check for Overflow & Underflow
#include <stdio.h>
#define SIZE 10
 
 
int ar[SIZE];
int top1 = -1;
int top2 = SIZE;
int data;
 
//Functions to push data
void push_stack1 ()
{
  if (top1 < top2 - 1)
  {
      printf("enter the element to be pushed in stack1: ");
      scanf("%d",&data);
    ar[++top1] = data;
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
void push_stack2 ()
{
  if (top1 < top2 - 1)
  {
      printf("enter the element to be pushed in stack2: ");
      scanf("%d",&data);
    ar[--top2] = data; 
  }
  else
  {
    printf ("Stack Full! Cannot Push\n");
  }
}
 
//Functions to pop data
void pop_stack1 ()
{
  if (top1 >= 0)
  {
    int popped_value = ar[top1--];
    printf ("%d is being popped from Stack 1\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}

void pop_stack2 ()
{
  if (top2 < SIZE)
  {
    int popped_value = ar[top2++];
    printf ("%d is being popped from Stack 2\n", popped_value);
  }
  else
  {
    printf ("Stack Empty! Cannot Pop\n");
  }
}
 
//Functions to Print Stack 1 and Stack 2
void print_stack1 ()
{
  int i;
  printf("\nSTACK1:");
  for (i = top1; i >= 0; --i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
void print_stack2 ()
{
  
  int i;
  printf("\nSTACK2:");
  for (i = top2; i < SIZE; ++i)
  {
    printf ("%d ", ar[i]);
  }
  printf ("\n");
}
 