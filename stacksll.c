#include "stacksll.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

stackPtr InitStackNode()
{
    stackPtr S = (stackPtr)malloc(sizeof(stackInfo));
    assert(S != NULL);
    S->Element = '0';
    S->Next = NULL;

    return S;
}

int isEmpty(stackPtr S)
{
    if (S->Next == NULL)
        return 1;
    else
        return 0;
}

void Push(stackPtr S, ElementType C)
{
    while (S->Next != NULL)
        S = S->Next;

    stackPtr New = InitStackNode();

    New->Element = C;
    S->Next = New;

    printf("%c is successfully pushed in stack\n", S->Next->Element);
}

void Pop(stackPtr S)
{
    if (!isEmpty(S))
    {
        while (S->Next->Next != NULL)
            S = S->Next;
        printf("Element popped is %c\n", S->Next->Element);

        free(S->Next);
        S->Next = NULL;
    }
    else
        printf("Stack is Empty\n");
}

ElementType Top(stackPtr S)
{
    if (!isEmpty(S))
    {
        while (S->Next != NULL)
            S = S->Next;

        return S->Element;
    }
    else
        {
            printf("Stack is Empty\n");
            return '0';
        }
}

void Display(stackPtr S)
{
    if (!isEmpty(S))
    {
        stackPtr temp = S;

        while (temp->Next != NULL)
        {
            temp = temp->Next;

            printf("%c ", temp->Element);
        }
        printf("\n");
    }
    else printf("Stack is Empty\n");
}

void ClearStack(stackPtr S)
{
    printf("While clearing stack :\n");
    while(S->Next != NULL)
    Pop(S);
}

void DeleteStack(stackPtr* S)
{
    stackPtr temp;

    while(*S != NULL)
    {
        temp = (*S)->Next;
        free(*S);
        *S = temp;
    }
    printf("Stack is deleted and now to push any element you have to create header node\n");
}

/*int main()
{
    stackPtr S = InitStackNode();
    Pop(S);
    if(Top(S) != '0')
    printf("Top Element in stack is %c\n", Top(S));
    Push(S, 'a');

    Push(S, 'b');
    Pop(S);
    Push(S, 'c');
    Pop(S);
    Push(S, 'd');
    if(Top(S) != '0')
    printf("Top Element in stack is %c\n", Top(S));
    Display(S);
    ClearStack(S);
    Display(S);
    
    DeleteStack(&S);
    
    // Display(S);
    // Push(S,'l');
}*/