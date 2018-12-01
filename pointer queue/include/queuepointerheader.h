#ifndef QUEUEPOINTERHEADER_H_INCLUDED
#define QUEUEPOINTERHEADER_H_INCLUDED
#include<stdio.h>
#include<stdlib.h>


struct node
{
 int data;
 struct node*next;
}*front=NULL,*rear=NULL,*newnode;



#endif // QUEUEPOINTERHEADER_H_INCLUDED
