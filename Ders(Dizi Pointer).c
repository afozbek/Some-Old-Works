#include <stdio.h>
#include <stdlib.h>

int mystrcmp(const char * s1,const char * s2)

{
	int result = 0;
	for(int i = 0 ; s1[i] != '\0'|| s2[i] != '\0' ; i++)
	{
		if(s1[i] != s2[i] )
		{
			result = 1;
			break;
		}
	}
	return result;
}




char *mystrcat(char s1[],char s2[]) //yýldýz olmasaydý tek karakter döndürürdü..
{
	int i = 0,j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	for(j = 0 ; s2[j] != '\0';j++)
		{
			s1[i + j] = s2[j];
		}
		s1[i + j] = '\0';		

	return 0;
}

//strcat ve strcmp fonksiyonlarýna bak..... 

void main()
{	
	char s1[30] = "MERHABA";
	char s2[30] = "DUNYA";
	mystrcat (s1,s2);
	printf("%s\n\n\n",s1);
	system("PAUSE");
}
