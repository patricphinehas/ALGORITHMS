#include<C:\Users\Sparkles\Desktop\aaa_lab\final\pointer queue\include\queuepointerheader.h>
#include<stdio.h>

void insert()
{
  int x;
  printf("Enter the item:\n");
  scanf("%d",&x);
  newnode=(struct node*)malloc(sizeof(struct node));
  if(rear==NULL)
  {
  newnode->data=x;
  newnode->next=NULL;
  front=newnode;
  rear=newnode;
  }
  else
  {
  newnode->data=x;
  newnode->next=NULL;
  rear->next=newnode;
  rear=newnode;
  }
}
void delete()
{
  int x;
  struct node*temp;
  if(front==NULL)
  {
  printf("Queue is empty....\n");
  }
  else
  {
  temp=front;
  if(front==NULL)
   {
    rear=NULL;
   }
   x=front->data;
   front=front->next;
   free(temp);
   printf("element deleted is %d\n",x);
  }
}
void display()
{
  struct node*temp=front;
  if(rear==NULL)
  printf("Queue is empty..\n");
  else
  {
   printf("The elements in the Queue are :\n");
   while(temp!=NULL)
   {
     printf("%d\t",temp->data);
     temp=temp->next;
   }
    printf("\n");
  }
}