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

}

int Count(PNODE first)
{
    return 0;
}
//call by Address
void InsertFirst(PPNODE first,int No)
{

}
void InsertLast(PPNODE first,int No)
{

}
void InsertAtPos(PPNODE first,int No,int Pos)
{

}





int main()
{
    PNODE head= NULL;
    int iRet=0;

    

    return 0;
}