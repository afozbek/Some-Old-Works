#include <stdio.h>

#include <stdlib.h>

#define BOYUT 10
int main()
{
	int i;
	
	int s[BOYUT];
	
	for (i=0;i<BOYUT;i++)
	
		s[i]=4+4*i;
	
	printf("%s %13s\n","Eleman","Deger");
	
	for(i=0;i<BOYUT;i++)
	{
		printf("%d %13d\n",i,s[i]);
	}
	
	return 0;
}

