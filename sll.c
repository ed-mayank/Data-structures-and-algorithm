#include <stdio.h>

#include <stdlib.h>
#include <assert.h>
#include "sll.h"


PtrToNode MakeNode (ElementType X)
{
    PtrToNode p = (PtrToNode)malloc(sizeof(ListNode));
    assert(p != NULL);
    p->Element = X;
    p->Next = NULL;
    return p;
}

void CreateEmptyList1(List *PP)
{
    PtrToNode P = MakeNode(0);
   
    PP = &P;
}

int main()
{
    ElementType X = 12;
    PtrToNode p;
    p = MakeNode (X);

    printf("%d\n",p->Element);
    List * PP;
    CreateEmptyList1(PP);
    printf("%d\n",(*PP)->Element);

}