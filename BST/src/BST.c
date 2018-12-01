#include <stdio.h>
#include <C:\Users\Sparkles\Desktop\aaa_lab\final\BST\include\bst.h>

void main()

{

    int ch;

    printf("\nOPERATIONS ---");

    printf("\n1 - Insert an element into tree\n");

    printf("2 - Delete an element from the tree\n");

    printf("3 - Inorder Traversal\n");

    printf("4 - Preorder Traversal\n");

    printf("5 - Postorder Traversal\n");

    printf("6 - Exit\n");

    while (1)

    {

        printf("\nEnter your choice : ");

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

            inorder(root);

            break;

        case 4:

            preorder(root);

            break;

        case 5:

            postorder(root);

            break;

        case 6:

            exit(0);

        default:

            printf("Wrong choice, Please enter correct choice  ");

            break;
        }
    }
}
