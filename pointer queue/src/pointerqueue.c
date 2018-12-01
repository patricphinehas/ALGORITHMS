#include <stdio.h>
#include <stdlib.h>
#include <C:\Users\Sparkles\Desktop\aaa_lab\final\pointer queue\include\quefunction.c>
#include <C:\Users\Sparkles\Desktop\aaa_lab\final\pointer queue\include\queuepointerheader.h>

void main()
{
  int ch;

  do
  {
    printf("Pointer implementation of queue\n");
    printf("1.\tinsert\n2.\tdelete\n3.\tdisplay\n4.\texit\n");
    printf("nenter the your choice:\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
      insert();
      break;
    case 2:
      delete ();
      break;
    case 3:
      display();
      break;
    case 4:
      exit(0);
      break;
    default:
      printf("invalid choice....\n");
    }
  } while (1);
}
