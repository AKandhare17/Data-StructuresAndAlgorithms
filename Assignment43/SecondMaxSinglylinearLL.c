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

int SecondMaxLL(PNODE head)
{
    if(head == NULL || head->next == NULL)
        return -1;

    int max1 = head->data;
    int max2 = -1;

    head = head->next;

    while(head != NULL)
    {
        if(head->data > max1)
        {
            max2 = max1;
            max1 = head->data;
        }
        else if(head->data > max2 && head->data != max1)
        {
            max2 = head->data;
        }

        head = head->next;
    }

    return max2;
}



int main()
{
    PNODE first=NULL;
    int iRet=0;

    insertFirst(&first,70);
;    insertFirst(&first,60);
    insertFirst(&first,50);
      insertFirst(&first,40);
      insertFirst(&first,30);
        insertFirst(&first,20);
          insertFirst(&first,10);
          
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=SecondMaxLL(first);
       printf("Second max Element is:%d\n",iRet);
       
       
      




    return 0;
}

