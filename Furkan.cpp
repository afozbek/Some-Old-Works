#include <stdio.h>

#include <stdlib.h>
#include <conio.h>
#include <string.h>

int main()
{	

	int i,j;
	char dizi[100];
	
	printf("Enter a word            :\t");
	gets(dizi);
	
	printf("The word you entered is :\t %s\n\n",dizi);
	
	for(i=100;i>=0;i--)
	{
		if(dizi[i]!='\0')
		{
			printf("%c",dizi[i]);
		}
	}	
		
	
	
	return 0;
	
	
}
