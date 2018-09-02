#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define size 200
int main()
{	
	int i,j,space=0;
	int word,character=0;
	int scharacter=0;	
	char a[33] = {'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x'};
	char b[33] = {'A','B','C','Ç','D','E','F','G','Ð','H','I','Ý','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','Ü','V','Y','Z','Q','W','X'};	
	char c[33] ={ '0','1','2','3','4','5','6','7','8','9',' ' };
	printf("Enter a string:");
	char dizi[size];
	gets(dizi);
	strlen(dizi);
	int furkan= strlen(dizi);
	
	for(i=0;i<furkan;i++)
	{
		if(dizi[i] == ' ')
		space++;
	}
	
	word=space+1;
	
	for(i=0;i<furkan;i++)
	{
		for(j=0;j<33;j++)
		{
			if(dizi[i]==a[j] ||dizi[i] == b[j] || dizi[i] == c[j])
			
				character++;
		
				
			
		}
	}
	
	scharacter = furkan-character;
	
	
	printf("Character:%d",character);
	printf("\n");
	printf("Words:%d",word);
	printf("\n");
	printf("Spc Character:%d",scharacter);
	printf("\n");
	
		

	return 0;
}
