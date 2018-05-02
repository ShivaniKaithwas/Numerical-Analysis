#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
    return(x*x-x-1);
}
void main()
{
   int i=1;
   float a,b,m,c,d;
   clrscr();
   printf("\n Enter value of a and b:");
   scanf("%f %f",&a,&b);
      if(f(a)==f(b)

       c=a*f(b)-b*f(a);
       d=f(b)-f(a);
       m=c/d;
       while(fabs(f(m))>=0.0001)
       {
       printf("\n %d \t %f \t %f \t %f ",i,a,b,m,f(m));
      if(f(a)*f(m)>0)
       {

       a=b ;
       b=m;
      }
       i=i+1;
      }
      printf("\n %d \t %f \t %f \t %f \t %f",i,a,b,m,f(m));

       printf("\nroot:=%f",m);

  getch();

}


