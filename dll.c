#include "dll.h"
#include <stdlib.h>
#include <assert.h>
#include <stdio.h>

PtrToNode CreateEmptyList()
{
    PtrToNode P = (PtrToNode)malloc(sizeof(ListNode));
    assert(P != NULL);
    P -> Next = NULL;
    P -> Prev = NULL;
    P ->Element = 0;
    return P;
}

void AddNodeAtEnd(PtrToNode P,ElementType X)
{
    while(P->Next != NULL)
    P = P->Next;

    PtrToNode L = CreateEmptyList();
    L->Element = X;
    P->Next = L;
    L->Prev = P;
}

void InsertNode(PtrToNode P,ElementType X)
{
    PtrToNode L = CreateEmptyList();
    L->Element = X;
    while(P->Element < L->Element && P->Next != NULL)
    P = P->Next;
    P->Prev->Next = L; //P = L
    L->Prev = P->Prev;
    P ->Prev = L;
    L->Next = P;

}

void DeleteNode(PtrToNode P,ElementType X)
{
    while(P->Element != X)
    P = P->Next;

    P->Prev->Next = P->Next;
    P->Next->Prev = P->Prev;
    free(P);
}

void DisplayEntireList(PtrToNode P)
{
    while(P->Next != NULL)
    {
        printf("%.1lf ",P->Element);
        P=P->Next;
    }
    printf("%.1lf\n",P->Element);
}
int main()
{
    PtrToNode P = CreateEmptyList();
    AddNodeAtEnd(P,2.3);
    AddNodeAtEnd(P,4.5);
    InsertNode(P,2.5);
    DisplayEntireList(P);
}