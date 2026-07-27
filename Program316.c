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
        printf("%d/t",first->data);
        first=first->next;
        printf("\n");
    }
    

}

int Count(PNODE first)
{
    int iCount=0;
    while (first!=NULL)
    {
       iCount++;
       first=first->next;
    }
    
    return iCount;
}
//call by Address
void InsertFirst(PPNODE first,int No)
{
    PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    if(*first==NULL)//Linkedlist is empty
    {

        *first=newn;

    }
    else//Linkedlist have a node
    {
        newn->next=(*first);
       *first=newn;

    }

}
void InsertLast(PPNODE last,int No)
{
     PNODE newn =NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=No;
    newn->next=NULL;
    if(*last==NULL)//Linkedlist is empty
    {

        *last=newn;

    }
    else//Linkedlist have a node
    {
       
    }

}
void InsertAtPos(PPNODE first,int No,int Pos)
{

}
void DeleteFirst(PPNODE first)
{

}
void DeleteLast(PPNODE last)
{

}
void DeleteAtPos(PPNODE first,int Pos)
{

}

int main()
{
    PNODE head= NULL;
    int iRet=0;
   InsertFirst(&head,51);
    InsertFirst(&head,21);
     InsertFirst(&head,11);


    return 0;
}