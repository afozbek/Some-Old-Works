#include <stdio.h>

#include <string.h>

void fters()//yazinin tersi alýndý....
{	int count = 0;
	char dizi[100],ch;
	int i;
	printf("Enter a word:\t");
	gets(dizi);
	
	int k = strlen(dizi);	 
	 
	/*  
	"naber" fte
 	
	
	
	*/
	
	for(i=k-1;i>=0;i--)
	
	{
	printf("%c",dizi[i]);

	}
	printf("\n\n\n\n");
	printf("Enter a character to see how much the word has...:");//girdiðin karakterden kaç tane var onu gösterir..
	scanf("%c",&ch);
	
	for(i=0;i<=k;i++)
	{
		if(dizi[i] == ch)
		{
			count++;
		}
	}
	if(count>0)
	{
		printf("The number of character :%d",count);
			
	}
	else
	{
		printf("The character %c is not present..",ch);//buraya kadar karakter ve ters yapýldý...	
	}		
	
}






int main()
{	
	fters();
	
	
	return 0;	
	
}

