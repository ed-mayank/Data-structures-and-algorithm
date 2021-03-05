#ifndef __POLYTERM_H
#define __POLYTERM_H

typedef struct PolyTerm* Poly ; 

typedef struct PolyTerm{
    double coeff;
    unsigned long int expo;
    struct PolyTerm *Next;
}PTerm;

#endif