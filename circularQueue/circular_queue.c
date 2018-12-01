#include<stdio.h>

#include<conio.h>

void main() {
    int rear = -1, front = 0, i, x, ch, maxsize, queue[10];
    printf("Array implementation of queues");
    printf("\nEnter the size of queue:");
    scanf("%d", & maxsize);
    printf("\n1.enqueue\n2.dequeue\n3.display\n4.exit");
    do {
        printf("\nenter your choice:");
        scanf("%d", & ch);
        switch (ch)

        {

            case 1:

                {

                    if (rear >= maxsize - 1)

                        printf("\nqueue is full");

                    else

                    {

                        printf("\nenter the element to insert:");

                        scanf("%d", & x);

                        rear = (rear + 1) % maxsize;

                        queue[rear] = x;

                    }

                    break;

                }

            case 2:

                {

                    if (front > rear)

                        printf("queue is empty\n");

                    else

                    {

                        x = queue[front];

                        if (front == rear)

                        {

                            front = 0;

                            rear = -1;

                        } else

                        {

                            printf("element %d is dequeued from the queue", queue[front]);




                            front = (front + 1) % maxsize;

                        }

                    }

                    break;

                }

            case 3:

                {

                    if (front > rear)

                        printf("\nqueue is empty");

                    else

                    {

                        printf("\nelemenets in the queue:");

                        for (i = front; i <= rear; i++)

                            printf("%d\t", queue[i]);

                    }

                    break;

                }

        }

    }

    while (ch != 4);

    getch();

}
