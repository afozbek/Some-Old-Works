#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <conio.h>

int main()

{
	int a;
	int b[30] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = NULL;
	
	a=10;
	
	ptr = b;
	ptr++;
	
	*ptr = 30;
	
	printf("%d\n",b);  //
	printf("+d\n",b[0]);//
	printf("%p\n",a);//
	printf("%d\n",ptr);//
	printf("%p\n",ptr);//
	printf("%p\n",&a);// 
	printf("%p\n",&ptr);//
	printf("%d\n",*(ptr+1));//
	printf("%\n",*ptr+1);//
	system("PAUSE");
	
}
