#include<stdio.h>
#include<stdlib.h>
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

int SearchFirstOcc(PPNODE head,int no)
{
    int i=0;
    i=1;
    PNODE temp=NULL;
    

    if(*head==NULL)
    {
        printf("LinkedList is Empty\n");
        return-1;
    }  
    else
    {
        temp=*head;
        while (temp!=NULL)
        {
            
            if(temp->data==no)
            {
                
                return i;
                
            }
              i++;
            temp=temp->next;
           
        }
         return -1;
       
        
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
    
       iRet=Count(first);
       printf("Count:%d\n",iRet);
       iRet=SearchFirstOcc(&first,51);
       if(iRet==-1)
       {
          printf("Element is Not Present\n");
       }
       else
       {
       printf("Element Found At:%d location\n",iRet);
       }




    return 0;
}