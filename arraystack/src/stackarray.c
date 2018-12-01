#include<stdio.h>
#include<C:\Users\Sparkles\Desktop\aaa_lab\final\arraystack\include\stackarray.h>
int main() {
    int n;
    top = -1;
    do {
        printf("\n\n 1.push \n 2.pop \n 3.display \n 4.top of the stack \n 5.sorting \n 6.traverse \n 7.exit \n");
        printf("\n Enter your choice:");
        scanf("%d", & n);
        switch (n) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                topofthestack();
                break;
            case 5:
                sorting();
                break;
            case 6:
                traverse();
                break;
            default:
                break;
        }
    } while (n <= 6);
    return 0;
}