#include <stdio.h>

#include <conio.h>

#define MAX 10

void create();
void insert();
void deletion();
void search();
void display();
void reverselist();
int a, b[20], n, p, e, f, i, pos;

void create()
{
    printf("\n Enter the number of nodes");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("\n Enter the  Element: %d", i + 1);
        scanf("%d", &b[i]);
    }
}

void reverselist()
{
    for (i = n - 1; i >= 0; i--)
        printf("%d", b[i]);
}

void deletion()
{
    printf("\n Enter the position u want to delete::");
    scanf("%d", &pos);
    if (pos >= MAX)
    {
        printf("\n Invalid Location::");
    }
    else
    {
        for (i = pos + 1; i < n; i++)
        {
            b[i - 1] = b[i];
        }
        n--;
    }
    printf("\n The Elements after deletion");
    for (i = 0; i < n; i++)
    {
        printf("\t%d", b[i]);
    }
}

void search()
{
    printf("\n Enter the Element to be searched:");
    scanf("%d", &e);

    for (i = 0; i < n; i++)
    {
        if (b[i] == e)
        {
            printf("Value is in the %d Position", i);
        }
        else
        {
            printf("Value %d is not in the list::", e);
            continue;
        }
    }
}

void insert()
{
    printf("\n Enter the position u need to insert::");
    scanf("%d", &pos);

    if (pos > n)
    {
        printf("\n invalid Location::");
    }
    else
    {
        for (i = MAX - 1; i >= pos - 1; i--)
        {
            b[i + 1] = b[i];
        }
        printf("\n Enter the element to insert::\n");
        scanf("%d", &p);
        b[pos] = p;
        n++;
    }
    printf("\n The list after insertion::\n");

    display();
}

void display()
{
    printf("\n The Elements of The list ADT are:");
    for (i = 0; i < n; i++)
    {
        printf("\n\n%d", b[i]);
    }
}