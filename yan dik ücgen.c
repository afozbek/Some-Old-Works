#include <stdio.h>

int main()
{
	int i,j,n;
	int yil,bos;
	
	printf("Number:\n");  //sayýyý alýyoruz..
	scanf("%d",&n);
	
	bos=n-1;             //atamamýz lazým bunu deneyerek de görebilirsiniz..
	yil=1;

	for(i=1;i<=n;i++)                //içiçe for döngüsü..

	{
		for(j=1;j<=bos;j++)
		{
			printf(" ");
		}
		for(j=1;j<=yil;j++)
		{
			printf("*");
		}
		printf("\n");
		bos--;
		yil+=2; //burada +2 yerine +1 koysaydýk yan dik üçgen olurdu..
	}
	

	
	
}
