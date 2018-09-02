#include<stdio.h>
#include<stdlib.h>
int main( void )
{
	int **matris;
	int satir_sayisi, sutun_sayisi;
	int i, j;
	printf( "Satýr sayýsý giriniz> " );
	scanf( "%d", &satir_sayisi );
	printf( "Sütun sayýsý giriniz> " );
	scanf( "%d", &sutun_sayisi );

	// Once satir sayisina gore hafizada yer ayiriyoruz. 
	// Eger gerekli miktar yoksa, uyari veriliyor.
	matris = (int **)malloc( satir_sayisi * sizeof(int) );
	if( matris == NULL )
		printf( "Yetersiz bellek!" );

	// Daha sonra her satirda, sutun sayisi kadar hucrenin 
	// ayrilmasini sagliyoruz.
	for( i = 0; i < satir_sayisi; i++ ) {
		matris[i] = malloc( sutun_sayisi * sizeof(int) );
		if( matris[i] == NULL )
			printf( "Yetersiz bellek!" );
	}

	// Ornek olmasi acisindan matris degerleri 
	// gosteriliyor. Dizilerde yaptiginiz butun 
	// islemleri burada da yapabilirsiniz.
	for( i = 0; i < satir_sayisi; i++ ) {
		for( j = 0; j < sutun_sayisi; j++ )
			printf( "%d ", matris[i][j] );
		printf( "\n" );
	}

	// Bu noktada matris ile isimiz bittiginden 
	// hafizayi bosaltmamiz gerekiyor. Oncelikle
	// satirlari bosaltiyoruz. 
	for( i = 0; i < satir_sayisi; i++ ) {
		free( matris[i] );
	}
	// Satirlar bosaldiktan sonra, matrisin 
	// bos oldugunu isaretliyoruz.
	free( matris );

	return 0;
}
