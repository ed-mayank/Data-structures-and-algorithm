#include "stack.h"
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

stackPtr InitList(int Max_items)
{
    stackPtr S = (stackPtr)malloc(sizeof(stackInfo));
    assert(S != NULL);
    
    S->maxNumOfTerms = Max_items;
    S->Array  = (char *)malloc(Max_items*sizeof(char));
    assert(S->Array != NULL);
    S->topId = -1;
    return S;
}

void Push(stackPtr S, char C)
{
    if( !isFull(S) )
    {
        S->topId ++;
        S->Array[S->topId] = C;
        printf("you pushed %c\n",S->Array[S->topId]);
    }
    else 
    printf("Stack is full\n");
}

void Pop(stackPtr S)
{
    if(S->topId != -1)
    {
        printf("You Popped out %c\n",S->Array[S->topId]);
        S->topId--;
    }
    else
    {
        printf("Stack is already Empty\n");
    }
    
}

char Top(stackPtr S)
{
    if(!isEmpty(S))
    return S->Array[S->topId];
    else return '_';
}

int isEmpty(const stackPtr S)
{
    if(S->topId == -1)
    return 1;
    else return 0;
}

int isFull(const stackPtr S)
{
    if(S->topId == S->maxNumOfTerms -1)
    return 1;
    else return 0;
}

void ClearStack(stackPtr S)
{
    S->topId = -1;
}

void DeleteStack(stackPtr* S)
{
    if(*S)
    {
        free((*S)->Array);
        free(*S);
        *S = NULL;
    }
}

int main()
{
    int n;
    printf("Enter max number of items stack contain: ");
    scanf("%d",&n);
    stackPtr S = InitList(n);

    // char ch;
    // printf("Enter a character to push: ");
    // scanf("%c",&ch);
    Push(S,'a');
    printf("Top element of stack is %c\n",Top(S));
    Pop(S);
    Pop(S);
    printf("Top element of stack is %c\n",Top(S));



}