#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 200
void fprint(char* p, int start, int finish) { // Char'dýþý deðiþken için "char*" ve "%c" 'yi deðiþtiriniz.
	int i;
	for (i = start; i<finish; i++) {
		printf("%c", *(p + i));
	}
}
// (string,a,b) a'dan b'ye kadar yazdýran alan fonksiyon.
int main()
{	int i,j;
	char dizi[size];
	int l=0;
	printf("Enter a string");
	gets(dizi);
	strlen(dizi);
	int k = strlen(dizi);
	
	strlwr(dizi);
	
	
	for(i=0;i<k;i++)
	{
		printf("%c",dizi[i]);
	}
	
	printf("\n\n\n");
	
	
	for(i=0;i<=k;i++)
	{
		if(dizi[i] == ' ')
		{
			for(j=i;j>=l;j--)
			printf("%c",dizi[j]);
			l=i;
		}
		if(dizi[i] == '\0')
		{
			printf(" ");
			for(j=i-1;j>=l;j--)
			printf("%c",dizi[j]);
		}
	}

	return 0;
}
