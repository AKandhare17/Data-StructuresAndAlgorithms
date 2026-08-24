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

int countEven(PNODE head)
{
  int iEvenCount=0;
    while(head!=NULL)
    {
        if((head->data%2)==0)
        {
            iEvenCount++;  
        }
        head=head->next;
    }

       return iEvenCount;
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



int main()
{
    PNODE first=NULL;
    int iRet=0;
    bool bRet=0;

    insertFirst(&first,110);
      insertFirst(&first,230);
        insertFirst(&first,320);
          insertFirst(&first,21);
          
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       Display(first);
       iRet=countEven(first);
        printf("Count of Even Elemnts:%d\n",iRet);
      




    return 0;
}

