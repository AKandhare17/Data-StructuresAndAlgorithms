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


int checkEven(int num)
{
    if(num%2==0)
        {
            return num;
        }
         return -1;
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

int addEvenfromLL(PPNODE head)
{
 int  iSum=0,iRet=0;

    PNODE temp=NULL;
     if(*head==NULL)
    {
        printf("LinkedList Is Empty\n");
        return 0;
    }  
    else
    {
        temp=*head;
        while (temp!=NULL)
        {
          if(iRet=checkEven(temp->data))
          {
            if(iRet!=-1)
            {
                  iSum=iSum+iRet;
            }
          
          }
            
           temp=temp->next;
         }
           
    }  
        return iSum;
}


int main()
{
    PNODE first=NULL;
    int iRet=0;

    insertFirst(&first,6);
      insertFirst(&first,7);
        insertFirst(&first,23);
          insertFirst(&first,11);
          insertFirst(&first,28);
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=addEvenfromLL(&first);
       printf("Addition Of Even Elements:%d\n",iRet);
       
      




    return 0;
}

