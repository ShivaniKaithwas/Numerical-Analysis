#include<stdio.h>
#include<math.h>
float f(float x)
{                float a;
    return cos(a) - a*exp(a);
}
void regula (float *m, float a, float b, float fa, float fb, int *itr)
{
    *m = a - ((b - a) / (fb - fa))*fb;
    ++(*itr);
    printf("Iteration no. %3d X = %7.5f \n", *itr, *m);
}
void main ()
{
    int itr = 0, maxmitr;
    float a,b,x2,x3,allerr;
    clrscr();
    printf("\nEnter the values of x0, x1, allowed error and maximum iterations:\n");
    scanf("%f %f %f %d", &a, &b, &allerr, &maxmitr);
    regula (&x2, a, b, f(a), f(b), &itr);
    do
    {
	if (f(a)*f(x2) < 0)
	    b=x2;
	else
	    a=x2;
	regula (&x3, a, b, f(a), f(b), &itr);
	if (fabs(x3-x2) < allerr)
	{
	    printf("After %d iterations, root = %6.4f\n", itr, x3);
	    return 0;
	}
	x2=x3;
    }
    while (itr<maxmitr);
    printf("Solution does not converge or iterations not sufficient:\n");
    return 1;
}
