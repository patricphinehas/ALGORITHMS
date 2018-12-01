void push()
{
  int item;
  printf("Enter the item\n");
  scanf("%d",&item);
  temp=malloc(sizeof(struct node));
  temp->data=item;
  if(top==NULL)
   {
    top=temp;
    temp->next=NULL;
   }
   else
   {
    temp->next=top;
    top=temp;
   }
}
void pop()
{
  temp=top;
  if(isEmpty()==0)
  printf("Stack is empty\n");
  else
  {
   printf("The element deleted = %d\n",temp->data);
   top=temp->next;
   free(temp);
  }
}
void display()
{
  temp=top;
  if(isEmpty()==0)
  printf("Stack is empty\n");
  else
  {
    printf("The elements of the stack are :");
    while(temp!=NULL)
    {
     printf("%d\t",temp->data);
     temp=temp->next;
    }
    printf("\n");
  }
}
void topofthestack()
{
 int x;
 if(isEmpty()==0)
 {
  printf("Stack is empty\n");
 }
 else
 {
 x=top->data;
 printf("the top of the stack is %d\n",x);
 }
}
int isEmpty()
{
    if(top==NULL)
    {
       return 0;
    }
    else
    {
         return 1;
    }
}

