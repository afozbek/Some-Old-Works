#include <stdlib.h>
#include <stdio.h>
main() {
	int answer;
	printf("\nWelcome to unnecessary painter program, it's realy unnecessary so how do you \nwanna dilly-dally(linger) =D\nType 0 for exit\nType 1 to draw square\nType 2 to draw right triangle\nType 3 to draw reverse right triangle\nType 4 to draw right triangle with number\nType 5 to draw equilateral quadrangle(eskenar dortgen)\n");
	scanf("%d", &answer);// Alýnan veriyi answer adlý deðere verir.
	if (answer == 0) {
		printf("But i wanna draw something for u :'(\n");
		system("PAUSE");
		return 0;
	}
	printf("Enter rows to create that unnecessary figure :D\n");//Kullanýcýdan bir sayý ister o sayý kadar satýr'a sahip þekil oluþturulur.
	int i, a, r, b, c; //Tanýmlanan sayýlarýn tamsayý olduðunu ifade eden kod dizisi.
	scanf("%d", &r);//Kullanýcýdan veri isteme.
	printf("------------------------\n");
	switch (answer) {

	case 1: //Kare çizme programý.
		for (int i = 1; i <= r; ++i) {//i, sýrasýyla 1,2,3,4...r deðerlerini alýr. r kez iþlem tekrarlanýr.
			for (int a = 1; a <= r; ++a) {// r-1+1=r kez * koyulur.
				printf("* ");
			}
			printf("\n");// * koyma iþlemi bitince satýr geçilir.
		}
		break;
	case 2://Dik üçgen çizme programý
		for (int i = 1; i <= r; ++i) {//i, sýrasýyla 1,2,3,4...r deðerlerini alýr. r kez iþlem tekrarlanýr.
			for (int a = 1; a <= i; ++a) {//a, sýrasýyla 1,2,3...i deðerlerini alýr.
				printf("* ");
			}
			printf("\n");// * koyma iþlemi bitince satýr geçilir.
		}

	
		break;
	case 3:// Ters dik üçgen çizme programý
		for (int i = r; i >= 1; --i) {// i, sýrasýyla r,r-1....1 deðerlerini alýr. r-1+1=r kez tekrarlanýr.
			for (int b = 1; b <= i; b++) {//b, sýrasýyla 1,2,3,4...i deðerlerini alýr. i-1+1=i kez tekrarlanir.
				printf("* ");
			}
			printf("\n");// * koyma iþlemi bitince satýr geçilir.
		}

		break;
	case 4://Dik üçgen çizme programý
		for (int i = 1; i <= r; ++i) {//i, sýrasýyla 1,2,3,4...r deðerlerini alýr. r kez iþlem tekrarlanýr.
			for (int a = 1; a <= i; ++a) {//a, sýrasýyla 1,2,3...i deðerlerini alýr.
				printf("%d",a);;// a deðerlerini ekrana yansitir.
			}
			printf("\n");// * koyma iþlemi bitince satýr geçilir.
		}
		
		break;
		
	case 5://Eþkenar dörtgen çizme programý.
		for (int i = 1; i <= r; ++i) {//i ,sýrasýyla 1,2,3...r deðerlerini alýr.r kez iþlem yapýlýr.
			for (int a = 2 * r - 2; a > 2 * i - 2; --a) {//r ye göre a deðeri tanýmlanýr ve her baslangýçta (2r-2)-(2i-2)=2r-2i kadar boþluk atýlýr.
				printf(" ");
			}
			for (b = 1; b < 2 * i; ++b) {// 2i-1 kadar * simgesi konulur.
				printf("* ");
			}


			printf("\n");//Her iþlem bitiþinde satýr geçilir.
		}
		for (int i = 1; i <= r - 1; ++i) {//i, sýrasýyla 1,2,3,4,5,6...r-1 deðerlerini alýr. r-1-1+1=r-1 kere iþlem yapýlýr.
			for (int a = 1; a <= 2 * i; a++) {//2i-1+1=2i tane boþluk konulur.
				printf(" ");
			}
			for (int b = 2 * i - 1; b < 2 * r - 2; ++b) {//2r-2-(2i-1)=2r-2i-1 tane * simgesi konulur.
				printf("* ");
			}
			printf("\n");// Her iþlem bitiþinde satýr atlanýr.
		}
		break;
	case 6://yapým aþamasýnda...
		
	default: break;

	}
	printf("\n Hehehe i (always) succeed :P\n\n\n");// Program baþardýðý için sevinir :D
	system("PAUSE");//Hemen kapanmamasý için bir komut dizisi.
}
