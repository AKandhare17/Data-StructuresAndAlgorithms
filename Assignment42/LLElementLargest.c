#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

struct node
{
   int data;
   struct node *next;
};

typedef int BOOL;
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void insertFirst(PPNODE head,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*head==NULL)
    {
        *head=newn;

    }
    else
    {
        newn->next=*head;
        *head=newn;
    }
}

int Count(PNODE head)
{
    int iCount=0;
    while(head!=NULL)
    {
       iCount++;
       head=head->next;
    }
    return iCount;
}

int LargestinLL(PPNODE head)
{
   int iMax=0;
    PNODE temp=NULL;
     if(*head==NULL)
    {
        return-1;
    }  
    else
    {
        temp=*head;
        iMax=temp->data;
        while (temp!=NULL)
        {
            if(iMax<temp->data)
            {
                iMax=temp->data;
            }
           temp=temp->next;
        }
         return iMax; 
    }  

}


int main()
{
    PNODE first=NULL;
    int iRet=0;

    insertFirst(&first,110);
      insertFirst(&first,230);
        insertFirst(&first,20);
          insertFirst(&first,240);
          insertFirst(&first,640);
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=LargestinLL(&first);
       if(iRet==-1)
       {
       printf("LinkedList is Empty\n");
       }
       else
       {
        printf("Largest element is:%d\n",iRet);
       }
       




    return 0;
}