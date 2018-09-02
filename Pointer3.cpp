#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#include <conio.h>

int main()

{
	int a;
	int b[30] = {1,2,3,4,5,6,7,8,9,10};
	int *ptr = NULL,*pt2 = NULL,*pt3 = NULL;
	
	pt2 = &b[9];
	
	ptr = b;
	
	pt3 = pt2 + 1;
	
	
	printf("%p\n",b);  //
	printf("%d\n",b[0]);//
	printf("%d\n",b[1]);//
	printf("%d\n",ptr);//
	printf("%d\n",*pt2);//
	printf("%d\n",*pt3);// 
	printf("%d\n",pt2[0]);//
	//printf("%d\n",ptr+2);

	//
	system("PAUSE");
	
}
