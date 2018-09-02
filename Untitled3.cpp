#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define boyut 200

void f2(char s[dim]) {// Sorunlu--------
	printf("The reverse in words of the sentence :\n---------------------------------------------------------\n");
	int i, wlenght[dim / 2] = { 0 }, a;// Dikkat !
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i+1] == ' ' || s[i+1] == '\0') { // Kelimelerin bittiði nokta boþluk veya NULL olduðu için bu koþullara göre iþlem yapýyoruz.
			for (a = 1; a <= i+1; a++) { // Boþluklarýn bulunduðu sýrayý kaydediyoruz.
				if (wlenght[a] == 0) { // Eðer atanmýþ deðer varsa deðiþtirmemesi için sadece 0 olduðunda(deðer atanmamýþsa) atama deðeri yapýyoruz.
				 wlenght[a] = i + 2;f1(s,wlenght[a], wlenght[a - 1]); // 2 boþluk arasýndaki karakterleri yazdýrýyoruz.
				 break;// Birden fazla yazdýrma islemi olmamasi için break ile döngüden cikiyoruz. 
				 }
			}
		}
	}
}
int main()
{
	f2(char s[dim]);
}
