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

int AdditionLL(PPNODE head)
{
   int iSum=0;
    PNODE temp=NULL;
     if(*head==NULL)
    {
        return-1;
    }  
    else
    {
        temp=*head;
        while (temp!=NULL)
        {
            iSum=temp->data+iSum;
           temp=temp->next;
        }
         return iSum; 
    }  

}


int main()
{
    PNODE first=NULL;
    int iRet=0;

    insertFirst(&first,101);
      insertFirst(&first,51);
        insertFirst(&first,21);
          insertFirst(&first,11);
          insertFirst(&first,51);
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=AdditionLL(&first);
       if(iRet==-1)
       {
       printf("LinkedList is Empty\n");
       }
       else
       {
        printf("Summation of Elements:%d\n",iRet);
       }
       




    return 0;
}