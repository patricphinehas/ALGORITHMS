#include <stdio.h>
#include <stdlib.h>
#define max 10
int insertq(int queue[max], int *rear, int *data)
{
    if (*rear == max - 1)
        return (-1);
    else
    {
        *rear = *rear + 1;
        queue[*rear] = *data;
        return (1);
    }
}
int delq(int queue[max], int *front, int *rear, int *data)
{
    if (*front == *rear)
        return (-1);
    else
    {
        (*front)++;
        *data = queue[*front];
        return (1);
    }
}