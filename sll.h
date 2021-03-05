#ifndef __SLL
#define __SLL

#include "IntElementType.h"

typedef struct node* PtrToNode;
typedef PtrToNode List;

typedef struct node {
    ElementType Element;
    PtrToNode Next;
}ListNode;

PtrToNode MakeNode(ElementType X);
void CreateEmptyList1(List *PP);


#endif