#include <stdio.h>
#include <C:\Users\Sparkles\Desktop\aaa_lab\final\circularQueue\include\CQpointer.h>
int main()
{
    int queue[max], data;
    int front, rear, reply, option;
    //... init queue
    front = rear = -1;
    printf("\tMenu");
    printf("\n----------------------------");
    printf("\n 1. Insert element in queue");
    printf("\n 2. Delete element from queue");
    printf("\n 3. Exit");
    printf("\n----------------------------");
    while (1)
    {
        printf("\nChoose operation : ");
        scanf("%d", &option);
        switch (option)
        {
        case 1: //insert
            printf("\nEnter Number : ");
            scanf("%d", &data);
            reply = insertq(queue, &rear, &data);
            if (reply == -1)
                printf("Queue is full");
            else
                printf("%d is inserted in queue.\n", data);
            break;
        case 2: //dele
            reply = delq(queue, &front, &rear, &data);
            if (reply == -1)
                printf("Queue is empty ");
            else
                printf("\nDeleted number is : %d\n", data);
            break;
        case 3:
            exit(0);
        }
    }
}