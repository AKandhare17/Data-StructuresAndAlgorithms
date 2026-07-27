#include<stdio.h>
#include<stdlib.h>
#pragma pack(1)
 struct node
{
    int data;
    struct node * next;

};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;
//Call by value
void Display(PNODE first)
{
    while (first!=NULL)
    {
        printf(" |%d |->",first->data);
        first=first->next;
       
    }
     printf("NULL\n");
    

}

int Count(PNODE first)
{
    int iCount=0;
    while (first!=NULL)
    {
       iCount++;
       first=first->next;
    }
    printf("\n");
    
    return iCount;
}
//call by Address
void InsertFirst(PPNODE first,int No)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    if(*first==NULL)
    {

        *first=newn;//Linkedlist is empty

    }
    else
    {
        newn->next=(*first);//Linkedlist have a node
       *first=newn;

    }

}
void InsertLast(PPNODE last,int No)
{
     PNODE temp=NULL;
     PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    if(*last==NULL)//Linkedlist is empty
    {

        (*last)=newn;

    }
    else//Linkedlist have a node
    {
       temp=(*last);
       while (temp->next!=NULL)
       {
        temp=temp->next;
       }
       temp->next=newn;
       
        
       
    }

}
void InsertAtPos(PPNODE first,int No,int Pos)
{
    int iSize = 0,iCnt=0;
    
    PNODE newn = NULL;
    PNODE temp = NULL;
    iSize = Count(*first);

    if((Pos < 1) || (Pos > iSize + 1))      // Filter
    {
        printf("Invalid position\n");
        return;
    }

    if(Pos == 1)
    {
        InsertFirst(first,No);
    }
    else if(Pos == iSize+1)
    {
        InsertLast(first,No);
    }
    else
    {
        
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
        newn->next = NULL;

        temp = *first;

        for(iCnt = 1; iCnt < Pos-1; iCnt++)
        {
            temp = temp ->next;
        }

        newn->next = temp->next;    // 1
        temp->next = newn;          // 2

    }

}
void DeleteFirst(PPNODE first)
{
    PNODE temp=NULL;
    if((*first)==NULL)
    {
          return;          //case:1(Empty LinkedList)
    }
    else if((*first)->next==NULL)
    {
        free(*first);         //case:2(One Node only)
        (*first)=NULL;
    }
    else
    {
        temp=(*first);
        (*first)=(*first)->next; //case3:(More than one node)

        free(temp);
                                       
    }

}
void DeleteLast(PPNODE last)
{
    PNODE temp=(*last);
    if((*last)==NULL)
    {
          return;          //case:1(Empty LinkedList)
    }
    else if((*last)->next==NULL)
    {
        free(*last);//case:2(One Node only)
        (*last)=NULL;
    }
    else
    {
        
        while(temp->next->next!=NULL)
        {
            temp=temp->next;           //case3:(More than one node)
        }     
        free(temp->next);
        temp->next=NULL;                        

    }

}
void DeleteAtPos(PPNODE first,int Pos)
{
   int iSize = 0;
    iSize = Count(*first);

    if((Pos < 1) || (Pos > iSize))      // Filter
    {
        printf("Invalid position\n");
        return;
    }

    if(Pos == 1)
    {
        DeleteFirst(first);
    }
    else if(Pos == iSize)
    {
        DeleteLast(first);
    }
    else
    {
        
    }

}

int main()
{
    PNODE head= NULL;
    int iRet=0;
   InsertFirst(&head,51);
     InsertFirst(&head,21);
        InsertFirst(&head,11);
        Display(head);
         InsertLast(&head,101);
           InsertLast(&head,111);
             InsertLast(&head,121); 
               Display(head);
               InsertFirst(&head,75);
                  DeleteFirst(&head);
                  Display(head);
                     DeleteLast(&head);
                     Display(head);
     Display(head);
     iRet=Count(head);
     printf("No of Nodes:%d\n",iRet);

    return 0;
}