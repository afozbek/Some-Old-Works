void fterskelime(char dizi[],int size){// 2. ödev....
	int j=1,i,a,ksize[boyut]={0},kelimesayisi=1;
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
