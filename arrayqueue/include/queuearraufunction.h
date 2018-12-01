#include<C:\Users\Sparkles\Desktop\aaa_lab\final\arrayqueue\include\quearray.h>
#include<stdio.h>
#include "conio.h"
#include "stdlib.h"

void enqueue(int size){
    if (rear >= size - 1)
                printf("\n Queue if full");
            else
            {
                printf("\n Enter the elements to insert:");
                scanf("%d", &x);
                rear = rear + 1;
                queue[rear] = x;
            }

}

void dequeue(){
    if (front > rear)
                printf("Queue is empty..\n");
            else
            {
                x = queue[front];
                printf("Element %d is dequed from the queue",x);
                if (front == rear)
                {
                    front = 0;
                    rear = -1;
                }
                else
                {
                    printf("Element %d is dequed from the queue", queue[front]);
                    front = front + 1;
                }
            }
}

void display(){
    int i ;
    if (front > rear)
                printf("\n Queue is empty..\n");
            else
            {
                printf("\n Elements in the queue :");
                for (i = front; i <= rear; i++)
                    printf("%d\t", queue[i]);
            }
}