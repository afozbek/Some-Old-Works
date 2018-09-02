#include <stdio.h>
#include<stdlib.h>

int main()
{	int sayac=0;
	int a,b,n;
	
	printf("Enter an integer:\t");
	scanf("%d",&n);
	printf("\n\n");
	printf("The number you entered:\t %d",n);
	printf("\n\n");
	
	for(a=2;a<n;a++)
	{
		if(n%a == 0)
		{	
			printf("Sayi kalansiz bolundu\n\n\n");
			printf("Sayi su sayida kalansiz bolundu :\t %d",a);
			printf("\n\n");
			sayac++;
		}
		else if(n%a != 0)
		{	
			printf("Sayi kalanli bolundu\n\n\n");
			printf("Sayi su sayida kalanli bolundu:\t %d",a);
			printf("\n\n");
			
		}
		
		
	
		
		
	}
	if(sayac>0)
	{
		printf("Asal degildir.\t");
		printf("\n\n\n");
	}
	else
	printf("Sayi asaldir.\t");
	printf("\n\n\n");
	return 0;
}
