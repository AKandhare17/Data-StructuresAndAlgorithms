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


bool checkPrime(int num)
{
    int i=0;
    i=2;
    if(num<=1)
    {
        return false;//filter
    }
    while(i<num)
    {
        if(num%i==0)
        {
            return false;
        }
        i++;
    }
    return true;
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

int checkPrimeinLL(PPNODE head)
{
   

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
          if(checkPrime(temp->data))
          {
            printf("%d is Prime No\n",temp->data);
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
      insertFirst(&first,7);
        insertFirst(&first,23);
          insertFirst(&first,11);
          insertFirst(&first,28);
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       checkPrimeinLL(&first);
       
      




    return 0;
}

