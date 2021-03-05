#ifndef __POLY_H
#define __POLY_H

#include "PolyTerm.h"

Poly InitNode();

void AddTerm(Poly P,double coefficient, unsigned long int exponent);
void DeleteTerm(Poly P, unsigned long int exponent);
void UpdateTerm(Poly P, double coefficient, unsigned long int exponent);

Poly PolyAdd(Poly P1, Poly P2);
Poly PolySubtract(Poly P1, Poly P2);

void DeleteAllTerms(Poly P);
void DeletePoly(Poly* P);

#endif