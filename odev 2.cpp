#include <stdio.h>
#include <string.h>

int main()

{	//TERS ALMA
	char dizi[200];
	printf("Enter a string:\t");
	
	gets(dizi);
	
	int k = strlen(dizi);
	
	printf("%d adet karakter var..",k);
	
	for(int i = k-1;i>=0;i--)
	{
		printf("%c",dizi[i]);
	}
	
	printf("\n\n\n\n\n");
	
	
	
	
	
}
