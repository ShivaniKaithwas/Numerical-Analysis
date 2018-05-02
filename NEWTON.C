#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
  return(pow(x,8)+pow(x,4)+pow(x,3)+x+1);
}
float fun(float x)
{
  return(8*pow(x,7)+4*pow(x,3)+3*pow(x,2)+1);
}
void main()
{
   int i=1;
   float a,m;
   clrscr();
   printf("\n Enter value of a :");
   scanf("%f",&a);
   do
   {
	m=a-(f(a)/fun(a));
	printf("\n %d \t %f \t %f \t %f",i,a,m,f(m));
	a=m ;
	i++;
   }while(fabs(f(m))>=0.0001);
   printf("\nroot:=%f",m);
   getch();

}


