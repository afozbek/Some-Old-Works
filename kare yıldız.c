#include <stdio.h>

int main()

{
int sayi,i,j;

printf("Bir sayi giriniz!\n\n");/*Ýlk Adým*/
scanf("%d",&sayi);

for(i = 1; i <= sayi;i++ )
  {
  
  for(j = 1;j <= sayi;j++)
    {
  
   if(i==1 || i==sayi || j==1|| j==sayi)
 
  printf("*");

else
  printf(" ");

    }


 
  
  

  printf("\n\n");	
  }

system ("PAUSE");	
}
	

  
	
	
	
	

	

