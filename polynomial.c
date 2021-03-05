#include "Polynomial.h"
#include <stdlib.h>
#include <assert.h>

Poly InitNode()
{
    Poly P = (Poly)malloc(sizeof(PTerm));
    assert(P != NULL);
    P->Next = NULL;
    return P;
}

void AddTerm(Poly P, double coefficient, unsigned long int exponent)
{
    Poly PNew;
    while(P->Next != NULL && (P->Next->expo) < exponent)
    {
        P = P->Next;
    }

    if(P->Next == NULL || P->Next->expo > exponent)
    {
        PNew = InitNode();
        PNew->coeff = coefficient;
        PNew->expo = exponent;
        PNew->Next = P->Next;
        P->Next = PNew;
    }
    else
    {
        P->Next->coeff = coefficient;
    }
}

void DeleteTerm(Poly P, unsigned long int exponent)
{
    while(P->Next->expo !=exponent)
    P = P->Next;

    Poly T = P;

    P->Next = P->Next->Next;
    free(T->Next);
}

void UpdateTerm(Poly P, double coefficient , unsigned long int exponent)
{
    while(P->Next->expo != exponent)
    P = P->Next;

    P->Next->coeff = coefficient;

}

Poly PolyAdd(Poly P1, Poly P2)
{
    Poly T;

    while(P1->Next != NULL || P2->Next != NULL)
    {
        if(P1->Next->expo == P2->Next->expo)
        {
            Addterm(T,(P1->Next->coeff + P2->Next->coeff),P1->Next->expo);
            P1 = P1->Next;
            P2 = P2->Next;
        }

        else if(P1->Next->expo > P2->Next->expo)
        {
            AddTerm(T,P1->Next->coeff,P1->Next->expo);
            P1 = P1->Next;
        }
        
        else
        {
            AddTerm(T,P2->Next->coeff,P2->Next->expo);
            P2 = P2->Next;
        }

    }

}