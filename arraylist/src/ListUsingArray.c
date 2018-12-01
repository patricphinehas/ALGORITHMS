#include <stdio.h>
#include "C:\Users\Sparkles\Desktop\aaa_lab\final\arraylist\include\linkedlisyusingarray.h"

int main()
{
    int ch;
    char g;

    do
    {
        printf("\n main Menu for list using array");
        printf("\n 1.Create \n 2.Delete \n 3.Search \n 4.Insert \n 5.Display\n 6. Reverse \n");
        printf("\n Enter your Choice");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;

        case 2:
            deletion();
            break;

        case 3:
            search();
            break;

        case 4:
            insert();
            break;

        case 5:
            display();
            break;

        case 6:
            reverselist();
            break;

        default:
            printf("\n Enter the correct choice:");
        }
        printf("\n Do u want to continue:::");
        scanf("\n%c", &g);
    } while (g == 'y' || g == 'Y');
    return 0;
}
