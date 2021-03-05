#ifndef __STACK
#define __STACK

typedef struct stack{
    char Element;
    
    struct stack* Next;
}stackInfo;

typedef char ElementType;
typedef struct stack* stackPtr;

stackPtr InitStackNode();

void Push(stackPtr S, ElementType C);
void Pop(stackPtr S);
ElementType Top(stackPtr S);

void Display(stackPtr S);
int isEmpty(stackPtr S);

void ClearStack(stackPtr S);
void DeleteStack(stackPtr* S);

#endif