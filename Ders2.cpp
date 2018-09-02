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
int dizi[] = {6,8,9,14,65,34,61,9,3,1,15,6};

int frekans[2][18];
for(int i = 0 ; i < 18 ;i++)
	{
		for(int j = 0 ; j < 18 ; j++)
			{
				if(frekans[j][0] == dizi [i])  //odevle alakalý ......*******
					{
						frekans[j][1]++;
						
					}
				else if(frekans[j]==0)
					{
						frekans[j][0] = dizi[i];
						frekans[j][1] = 1;
						break;
					}
		
				
			}
	}

	char s1[30] = "MERHABA";
	char s2[30] = "DUNYA";
	char s3[30] = "Dunya";
	
	//mystrcat (s1,s2);
	printf("%d\n\n",mystrcmp(s1,s2));
	printf("%d\n\n",mystrcmp(s3,s2));
	system("PAUSE");
}
