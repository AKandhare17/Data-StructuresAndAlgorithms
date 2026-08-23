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

int PerfectinLL(PPNODE head)
{
   int i=0,Perfect=0;

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
                Perfect=0;
                for(i=1;i<=(temp->data/2);i++)
               {
                    if((temp->data%i)==0)
                    {
                        Perfect=Perfect+i;
                     }
    
                }

                     if(temp->data==Perfect)
                     {
                        printf("Perfect No is:%d\n",Perfect);
                         
                     }
                   

                       temp=temp->next;
         }
           
    }  

}


int main()
{
    PNODE first=NULL;
    int iRet=0;

    insertFirst(&first,6);
      insertFirst(&first,51);
        insertFirst(&first,21);
          insertFirst(&first,11);
          insertFirst(&first,28);
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=PerfectinLL(&first);
       if(iRet==-1)
       {
       printf("Perfect No Not found\n");
       }
      




    return 0;
}

