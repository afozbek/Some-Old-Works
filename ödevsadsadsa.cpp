#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define boyut 400
int fstrlen(char dizi[]){
	int i;
	for(i=0;dizi[i]!='\0';i++);
	return i; 
}
void fters(char dizi[],int size){
	int i;
	for(i=size-1;i>=0;i--)
	printf("%c",dizi[i]);
}
void fterskelime(char dizi[],int size){// 2. ödev artýk nasýl anlamadýysan !!!
	int j=1,i,a,ksize[boyut/2]={0},kelimesayisi=1;
	for(i=0;i<size;i++)if(dizi[i]==' ')kelimesayisi++;// Kelime sayýsý bulundu.
	for(j=1;j<=kelimesayisi;j++){// Kelime sayýsý j
		for(i=0;i<=size;i++){// Dizideki karakter diz[1] ...
			if(dizi[i]==' ' || dizi[i]=='\0'){// Kelimeler boþluklarla veya NULL ile son bulduðu için if içinde ' ' veya NULL 
				for(a=1;a<=j;a++)
				if(i!=ksize[j-a]){ // Öncekilerine eþit deðilse atasýn. (ayný deðerden 1den fazla olmasýn).
					ksize[j]=i;// atama .
					break; // 1. kelimeye 1den fazla deðer atamamsý için.
				}
			}
		}
	}
	for(j=1;j<=kelimesayisi;j++){ // Kelime sayýsý kadar tekrar eder.
		for(i=ksize[j]-1;i>=ksize[j-1];i--){ // 2 boþluk arasýný yazdýrýr.
			printf("%c",dizi[i]);
		}
		printf(" ");
	}
}
int main(){
	char dizi[boyut];
	printf("Enter a string:\t");
	gets(dizi);
	printf("\nThe size of the string: %d",fstrlen(dizi)); // Boyutu bulduk.
	printf("\nCumlesinin tersi:\t"); fters(dizi,fstrlen(dizi)); //Ters çevirme fonksiyonu.
	printf("\nCumlenin kelime kelime tersi:\t");fterskelime(dizi,fstrlen(dizi));
	
	
}
