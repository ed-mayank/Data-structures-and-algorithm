#include <stdio.h>
#include <math.h>
#include "complex.h"

int main()
{
    complex2 c1,c2;
    
    c1 = Cx2Create(c1.a, c1.b);
    

   
   

   

   complex2 z = Cx2Inv(c1);
   printf("%.2lf+i%.2lf\n",z.a,z.b);
   
   complex2 x = Cx2Conj(c1);
   printf("%lf+i%lf\n",x.a, x.b);
}