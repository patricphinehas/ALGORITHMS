#include<stdio.h>
#include<stdlib.h>
#include"C:\Users\Sparkles\Desktop\aaa_lab\final\two stack using array\include\twoStack.h"
int main()
{
  int i,ch;
  int num_of_ele;
 
  printf ("--two stack using single array --\n");
  do{
      printf ("1.push in stack 1\n2. push in stack 2\n3.pop in stack1\n4.pop in stack2\n5.print stack1\n6.print stack2\n7. exit\n");
      printf("enter the choice:\t");
      scanf("%d",&ch);
      switch(ch)
      {
          case 1:
            push_stack1();
          break;
          case 2:
            push_stack1();
          break;
          case 3:
            pop_stack1();
          break;
          case 4:
            pop_stack2();
          break;
          case 5:
            print_stack1();
          break;
          case 6:
            print_stack2();
          break;
          case 7:
          exit(0);
      }
  }while(ch!=7);
   
return 0;
}