#include <stdio.h>
int main()

{	int para;
	int yirmilik,onluk,beslik;
	
basa:	printf("Enter amount of money:\t");
	
	scanf("%d",&para);
	
	printf("\n\n");
	
	if(para%5==0)
	{
		yirmilik =para/20;
		para -= yirmilik*20;
		
		onluk = para/10;
		para -= onluk*10;
		
		beslik = para/5;
		para -= beslik*5;
		
	}
	
	else {
	
	printf("Enter amount of money 5 or its...\n\n\n ");
	
	goto basa;
	
	printf("\n\n\n");
	
	}
	
	
	printf("\n\n\n\n");
	
	printf("Yirmilik sayisi:     %d \n",yirmilik);
	
	printf("Onluk sayisi   :     %d \n",onluk);
	
	printf("Beslik sayisi  :     %d \n",beslik);
	
	
	
	
	
	
}
