#include <stdio.h>
#include <stdlib.h>
#include "C:\Users\Sparkles\Desktop\aaa_lab\final\singly linked list\include\linkedlist.h"
int main()
{
    int command = 0;
    int data;

    node *head = NULL;
    node *tmp = NULL;
    callback disp = display;

    menu();
    while (1)
    {
        printf("\nEnter a command(0-10,-1 to quit):");
        scanf("%d", &command);

        if (command == -1)
            break;
        switch (command)
        {
        case 0:
            menu();
            break;
        case 1:
            printf("Please enter a number to prepend:");
            scanf("%d", &data);
            head = prepend(head, data);
            traverse(head, disp);
            break;
        case 2:
            printf("Please enter a number to append:");
            scanf("%d", &data);
            head = append(head, data);
            traverse(head, disp);
            break;
        case 3:
            printf("Please enter a number to search:");
            scanf("%d", &data);
            tmp = search(head, data);
            if (tmp != NULL)
            {
                printf("Element with value %d found.", data);
            }
            else
            {
                printf("Element with value %d not found.", data);
            }
            break;
        case 4:
            printf("Enter the element value where you want to insert after:");
            scanf("%d", &data);
            tmp = search(head, data);
            if (tmp != NULL)
            {
                printf("Enter the element value to insert after:");
                scanf("%d", &data);
                head = insert_after(head, data, tmp);
                if (head != NULL)
                    traverse(head, disp);
            }
            else
            {
                printf("Element with value %d not found.", data);
            }
            break;
        case 5:
            printf("Enter the element value where you want to insert before:");
            scanf("%d", &data);
            tmp = search(head, data);
            if (tmp != NULL)
            {
                printf("Enter the element value to insert before:");
                scanf("%d", &data);
                head = insert_before(head, data, tmp);

                if (head != NULL)
                    traverse(head, disp);
            }
            else
            {
                printf("Element with value %d not found.", data);
            }
            break;
        case 6:
            head = remove_front(head);
            if (head != NULL)
                traverse(head, disp);
            break;
        case 7:
            head = remove_back(head);
            if (head != NULL)
                traverse(head, disp);
            break;
        case 8:
            printf("Enter the element value to remove:");
            scanf("%d", &data);
            tmp = search(head, data);
            if (tmp != NULL)
            {
                remove_any(head, tmp);
                if (head != NULL)
                    traverse(head, disp);
            }
            else
            {
                printf("Element with value %d not found.", data);
            }
            break;
        case 9:
            head = insertion_sort(head);
            if (head != NULL)
                traverse(head, disp);
            break;
        case 10:
            head = reverse(head);
            if (head != NULL)
                traverse(head, disp);
            break;
        case 11:
            if (head != NULL)
            {
                dup_delete(head, disp);
            }
        }
    }
    dispose(head);
    return 0;
}