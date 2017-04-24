#include <stdio.h>
#include <math.h>

int main()
{
    double A,B,C,D,E,F,G;
    
    scanf ("%lf", &A);
    scanf ("%lf", &B);
    scanf ("%lf", &C);
    
    D = B*B-4*A*C;
    
    E = pow(D,.5);
    
    if(D<0||A==0)
    {
        printf ("Impossivel calcular\n");
    }
    else
    {
        F=(-B+E)/(2*A);
        G=(-B-E)/(2*A);
        printf ("R1 = %.5lf\n",F);
        printf ("R2 = %.5lf\n",G);
    }
    return 0;
}