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

}
void InsertLast(PPNODE last,int No)
{

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
    Display(head);
   iRet= Count(head);
  

    return 0;
}