#ifndef __DLL
#define __DLL

typedef struct node* PtrToNode;
typedef double ElementType;

typedef struct node {
    ElementType Element;
    PtrToNode  Next;
    PtrToNode Prev;
}ListNode;

PtrToNode CreateEmptyList();
void AddNodeAtEnd(PtrToNode P,ElementType X);
void InsertNode(PtrToNode P,ElementType X);
void DeleteNOde(PtrToNode P);
void DisplayEntireList(PtrToNode P);

#endif