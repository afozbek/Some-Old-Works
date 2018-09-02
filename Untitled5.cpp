#include <stdio.h>

#include <string.h>

void fters()
{
	char dizi[100];
	int i,j;
	printf("Enter a word:\t");
	gets(dizi);
	
	int k = strlen(dizi);
	
	
	for(i=k-1;i>=0;i--)
	printf("%c",dizi[i]);	

}
int main()
{
	fters();
}

