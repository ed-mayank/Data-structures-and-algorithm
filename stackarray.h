#ifndef __STACK
#define __STACK

typedef struct stack{
    int topId;
    int maxNumOfTerms;
    char * Array;
}stackInfo;

typedef struct stack* stackPtr;

stackPtr InitList(int maxNumOfTerms);

void Push(stackPtr S,char C);
void Pop(stackPtr S);
char Top(stackPtr S);

int isEmpty(const stackPtr S);
int isFull(const stackPtr S);   
void ClearStack(stackPtr S);
void DeleteStack(stackPtr* S);


#endif