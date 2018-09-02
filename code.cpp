// Yunus Emre AK 
// 1306150001
// Date : 14.12.2016 
// Development Environment : Visual Studio 2015
// DÝkkat: Program türkçe karakterler de special char diye alýnýyor.
// Dikkat: Her bir karakterin tekrar etme sayýsý gösterilmektedir.(özel karakterler ve sayýlar da mevcuttur.)(sadece harfler deðil)
// Dikkat: Karakterleri tekrarýna göre dizdiðimiz aþamada her harf ufak harf olarak ele alýnmýþtýr, karakter boyutlarýnýda ayýraca eklemek için tolower'lari siliniz. (44 ~ 74)

#include <stdio.h> // Genel giriþ çýkýþ kütüphanesi.
#include <stdlib.h> // Standart kütüphane
#include <string.h> // String fonksiyonlarý için. Örn. strlen/strcpy
#include <locale.h> // Türkçe karakteri tanýmlamak için gereken kütüphane.
#include <ctype.h> // Tolower için.(Dev C++'da bu kütüphane olmadan çalýþmýyor.VS'de gerek yok.)
#define dim 400 // Girilen cümlenin boyutu.
int fsize(char s[dim]) {
	int size;
	for (size = 0; s[size] != '\0'; size++);// NULL olana kadar arttýrýlýr. NULL son karakterdir.
	return size;
	// return strlen(s);
}
//Girilen cümlenin boyutunu tanýmlama fonksiyonu.(strlen ile de yapýlabilir.)
void fstrcpy(char s2[], const char s1[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		s2[i] = s1[i];
	}
	s2[i + 1] = '\0';
}
// strcpy fonksiyonu.
int fchoose(char s[dim]); // Fonksiyon tanýmlama. 
// Kullanýcýnýn girdiði cümleye göre iþlem yapan program.(Ýnt. to Alg. Ödevi 1)
void f1(char s[dim], int size, int endsize) {
	for (int i = 0; i < size; i++) {
		if (i > size - endsize - 1)break; 
		printf("%c", s[size - i - 1]);
	}
}
//Tersten yazýrma fonksiyonu.Size'dan baþlýyýp endsize'a kadar yazar. (yazýlacak cümle,boyut,bitirici boyut)
void ftype(char s[dim]) {
	printf("Please type any sentence to do something.I'll ask u after you type\n For true reason dont use turkish char.\n(This program will show u all of chars. repetitions)\n");
	gets(s);
}
// Cümle girdisi alma fonsiyonu.
void fcbyc(const char s[dim], int size) {
	int c[dim] = { 0 };
	char t[dim];
	strcpy(t, s); // Dikkat: strcopy fonksiyonu yukarýda fstrcpy ile açýklanmýþtýr.
	for (int a = 0; a < size; a++) { // Her bir karakteri(a) diðer karakterlere(b) göre kýyaslama.
		for (int b = 0; b < size; b++) { // Birden fazla ayný karaktere bakmamak için ayný olan diðer karakterlerin sayisini aldýktan sonra ' '(boþluk) atýyoruz ki kontrol edilmesin.
			if (t[a] != ' '&&	tolower(t[a]) == tolower(t[b])) { c[a]++; if (a != b)t[b] = ' '; }
		}// tolower yaparak her harfi küçük harf olarak ele alýyoruz.
	}
	for (int a = 0; a < size; a++) {
		if (c[a] != 0)printf(" %c : %d ", tolower(t[a]), c[a]);
	}
}
// Karakterlerin tekrarýný yazan fonksiyon.
void f6(const char s[dim], int size) {
	int b = 0;
	int c[dim] = { 0 };
	char t[dim];
	strcpy(t, s); // Warning
	for (int a = 0; a < size; a++) {
		for (int b = 0; b < size; b++) {
			if (t[a] != ' '&&	tolower(t[a]) == tolower(t[b])) { c[a]++; if (a != b)t[b] = ' '; }
		}// t[b]'yi boþluk yapýyoruz ki ayný karakteri tekrardan sayaca sokmasýn.
	}
	printf(" "); // Güzel görünüm için ilk kýsma boþluk atýlmýþtýr.
	for (int k = size; k>0; k--) {
		b = 0;
		for (int a = 0; a < size; a++) {
			if (c[a] != 0)
				if (c[a] == k) { b = 1; printf("%c", tolower(t[a])); }
			if (a == (size - 1) && b == 1)printf(" ");
			// b deðiþkeninin olmasýnýn sebebi, eðer hiç bir harf yazýlmazsa gereksiz yere boþluk atmasýn diyedir.
			// a = size-1 olmasýnýn sebebi, eþ sayýda olan harflerin yazýlmasý bitmeden boþluk atýlmasýn diyedir.
		}
	}
}
//Karakterleri tekrarlarýna göre yazan fonksiyon.
int fwords(char s[dim]) {
	int words = 1, i;
	for (i = 0; s[i] != '\0'; i++) {
		if (s[i] == ' ')words++;
	}
	return words;
}
// Kelime sayýsýný bulan fonksiyon.
void f5(char s[dim]) { 
	int p, i, a, wsize[dim / 2] = { 0 }, wlenght[dim / 2] = { 0 }, t[dim / 2] = { 0 };
	// Wsize; Kelimenin uzunluðu. Wlenght; Kelimenin baþlangýca olan uzaklýðý.
	// Örn; "how to make C" wsize[2]=2 wlenght[2]=6
	for (i = 1; s[i - 1] != '\0'; i++) { // Kelime bitiþleri boþluk veya özel karakterlerle ifade edilir.
		if (s[i] == ' ' || s[i] == '\0' || s[i] == '.' || s[i] == '?' || s[i] == '!' || s[i] == ',' || s[i] == '_' || s[i] == '-' || s[i] == ':' || s[i] == ';') {
			for (a = 1; a <= i; a++) { // Kelimelerin uzunluklarýný bir diziye kaydeder.
				if (wsize[a] == 0) { wsize[a] = i + 1 - wlenght[a - 1]; wlenght[a] = i + 1; break; }
			}
		}

	}
	for (p = 1; wsize[p] != 0; p++) {// Büyük olduðu her sayý için 1 puan alýyor.
		for (int j = 1; wsize[j] != 0; j++)
			if (wsize[p] > wsize[j])t[p]++;
	}
	for (int k = 1; k < p + 1; k++) {
		for (int j = 1; j < p + 1; j++) {
			if (t[j] == p - k) { // Puaný en yüksek olaný ilk yazýyor
				for (int i = wlenght[j] - wsize[j]; i < wlenght[j]; i++) {
					if (i == (wlenght[j] - wsize[j]) || i == (wlenght[j] - 1))printf(" ");
					printf("%c", s[i]);
				}
				//wlenght -wsize 'dan baþlat wsize kadar yazdýr.
			}
		}
	}

}
// Kelimelerin uzunlluðunu bulap, uzunluguna göre sýralayan fonksiyon.
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
//Terstten kelime kelime yazan fonksiyon.
int fspc(char s[dim]) {
	int size, temp = 0;
	size = fsize(s);
	char a[33] = { 'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x' };
	char b[33] = { 'A','B','C','Ç','D','E','F','G','Ð','H','I','Ý','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','Ü','V','Y','Z','Q','W','X' };
	char c[33] = { '0','1','2','3','4','5','6','7','8','9',' ' };
	for (int i = 0; i < size; i++) {
		for (int j = 0; j<33; j++) // Her özel karakter olmayan karakter icin 1 artiyor.
			if (s[i] == a[j] || s[i] == b[j] || s[i] == c[j])temp++;
	}
	return size - temp; // Özel karakter sayýsý= Toplam karakter - Özel olmayan karakter sayýsý.

}
// Özel karakter sayýsýný bulan fonksiyon.
void fprint(char s[dim], int size) {
	int i;
	printf("\nThe input is :\n ");
	for (i = 0; i < size; i++) { //Diziler 0 dan baþlar s[0]. Bu sebeple i=0'dan baþlýyoruz ve size'a kadar yazýyoruz.(s[size]=NULL)
		printf("%c", s[i]);
	}
}
// Girdiyi yazdýran fonksiyon.
int fmain(char s[dim]) {
	fprint(s, fsize(s));
	printf("\n---------------------------------------------------------\nThe reverse of the sentence:\n---------------------------------------------------------\n"); f1(s, fsize(s), 0);
	printf("\n---------------------------------------------------------\n"); f2(s);
	printf("\n---------------------------------------------------------\nCounts:\n---------------------------------------------------------\n Characters: %d	Words: %d	Special Char: %d", fsize(s), fwords(s), fspc(s));
	printf("\n---------------------------------------------------------\nEach character repetition:\n---------------------------------------------------------\n"); fcbyc(s, fsize(s)); printf("\n");
	printf("\n---------------------------------------------------------\nThe words by length\n---------------------------------------------------------\n"); f5(s);
	printf("\n---------------------------------------------------------\nCharacters by repetition:\n---------------------------------------------------------\n"); f6(s, fsize(s));
	printf("\n---------------------------------------------------------\n");
	return fchoose(s);
}
//Hepsini yazdýran fonksiyon.
int fchoose(char s[dim]) {
	char answer[dim];
	printf("\n---------------------------------------------------------\nType any number(between 0-6(with 0 & 6)) to do any thing\n--) Retype sentence if u want to change(ex. hello guys)\n1-) Write reverse of the sentence\n2-) Write reverse in words\n3-) Write Counts\n4-) Counts each character repetition\n5-) Order the words by length\n6-) Order characters by repetition\n7-) For exit\n0-) For show all.\n---------------------------------------------------------\n");
	gets(answer);
	if (answer[0] == '0') return fmain(s);
	else if (answer[0] == '1') {
		printf("\n---------------------------------------------------------\nThe reverse of the sentence:\n---------------------------------------------------------\n"); f1(s, fsize(s), 0);
	}
	else if (answer[0] == '2') {
		printf("\n---------------------------------------------------------\n"); f2(s);
	}
	else if (answer[0] == '3') {
		printf("\n---------------------------------------------------------\nCounts:\n---------------------------------------------------------\n Characters: %d	Words: %d	Special Char: %d", fsize(s), fwords(s), fspc(s));
	}
	else if (answer[0] == '4') {
		printf("\n---------------------------------------------------------\nEach character repetition:\n---------------------------------------------------------\n"); fcbyc(s, fsize(s));
	}
	else if (answer[0] == '5') {
		printf("\n---------------------------------------------------------\nThe words by length\n---------------------------------------------------------\n"); f5(s);
	}
	else if (answer[0] == '6') {
		printf("\n---------------------------------------------------------\nCharacters by repetition:\n---------------------------------------------------------\n"); f6(s, fsize(s));
	}
	else if (answer[0] == '7')return 0;
	else {
		printf("\n---------------------------------------------------------\n");
		strcpy(s, answer); fprint(s, fsize(s)); //Yeni veriyi eskisinin yerine kopyalar.
	}
	return fchoose(s); //Baþa sarma kodu.
}
// Seçim yapma fonksiyonu.
int main() {
	char s[dim];
	ftype(s);
	fprint(s, fsize(s));
	fchoose(s);
	printf(" Thank u for using my program :)\n\n");
	system("PAUSE");
}
// Ana fonksiyon.
