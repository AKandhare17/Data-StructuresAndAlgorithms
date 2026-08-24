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

void Display(PNODE head)
{
    while (head!=NULL)
    {
       printf("|%d|->",head->data);
       head=head->next;
    }

    printf("NULL\n");
    
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

int countGreater(PNODE head,int X)
{
    int iCount=0;
   

    int i=0;
    for(i=1;i<iCount,head!=NULL;i++,head=head->next)
    {
        if((head->data)>X)
        {
            iCount++;
        }
    }
    return iCount;
}


int main()
{
    PNODE first=NULL;
    int iRet=0;
    bool bRet=0;

    insertFirst(&first,110);
      insertFirst(&first,230);
        insertFirst(&first,320);
        insertFirst(&first,230);
          insertFirst(&first,240);
          insertFirst(&first,100);
          
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=countGreater(first,100);
       printf("Count of No Grater Than 100 Are:%d\n",iRet);
       
      
      




    return 0;
}

