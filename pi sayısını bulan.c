/* Pi sayýsýný 0.0001 hatayla bulan program*/
#include<stdio.h>
#include<math.h>
#include<conio.h>
 
int main(void)
{
   double pi=0.0;
   double error=0.0001;
   double pi0=3.14159265358979323;
   double i, x;
   clrscr();
   for(i=1.0,x= 1.0; fabs((4 * pi) -pi0) > error; i+=2.0, x = -1*x)
      pi += x * 1.0/i;
      pi*=4.0;
   printf("%1.17f\n", pi);
   return 0;
}
