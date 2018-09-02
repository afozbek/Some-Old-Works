#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <conio.h>

int main()

{
	int a;
	int *ptr = NULL;
	
	a=10;
	ptr=&a;
	
	printf("%d\n",a);  //10luk TABANDA a..
	printf("%p\n",a);//16 lýk TABANDA a..
	printf("%d\n",ptr);//10 luk tabanda a'nýn adresi..
	printf("%p\n",ptr);//16 lýk tabanda a'nýn adresi..
	printf("%p\n",&a);//a nýn n adresi.. 
	printf("%p\n",&ptr);//16 lýk tabanda ptr nýn adresi..
	
	system("PAUSE");
	
}
