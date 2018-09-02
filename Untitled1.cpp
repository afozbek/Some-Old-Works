#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	char cumle[400],harfler[33]={'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x'};
	int sayac[26]={0},i,j;
	printf("Plese enter a sentence"); gets(cumle);
	strlwr(cumle);
	for(i=0; i<strlen(cumle);i++ )
	{
		for(j=0; j<26;j++)
		if(cumle[i]==harfler[j])
		{
			sayac[j]++;
		}
	}
	for(i=0; i<26;i++)
	{
		if(sayac[i]==0)
		{
			continue;
		}
		printf("%c:%d ",harfler[i],sayac[i]);
	}
	
	system("PAUSE");
}
