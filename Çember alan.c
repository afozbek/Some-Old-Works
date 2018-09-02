#include <stdio.h>

#define pi 3.14

#define yaz printf

#define al scanf

int main()
{
	int r;
	
	float alan;
	
	islem:yaz("Enter an integer:");
	
	al("%d",&r);
	
	if(r<0)
	{
		goto islem;
		
	}
	
	
	
	alan = r * r * pi ;
	
	yaz("Alan %.2f dir",alan);
	

	
}



