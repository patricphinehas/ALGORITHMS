#include <stdio.h>
#include <conio.h>
#include "C:\Users\Sparkles\Desktop\aaa_lab\final\arrayqueue\include\quearray.h"
// #include "C:\Users\Sparkles\Desktop\aaa_lab\final\arrayqueue\include\queuearraufunction.h"
int main()
{
    int ch, size;
    printf("\n Enter the size of queue:");
    scanf("%d", &size);
    printf("\n 1.enqueue \n 2.dequeue \n 3.display \n 4.exit");
    do
    {
        printf("\n Enter your choice:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue(size);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        }
    } while (ch != 4);
    return 0;
}