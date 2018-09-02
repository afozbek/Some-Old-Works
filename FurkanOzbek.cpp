	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define boyut 400

int f0(char dizi[]) //A.Furkan Özbek -1306160017
	{  
	int i;
	for(i=0;dizi[i]!='\0';i++);
	return i; 
	}
void f1(char dizi[],int size)	// 1. ödev
	{  
	int i;
	for(i=size-1;i>=0;i--) // size-1 dememizin nedeni dizinin size'ý NULL olur...
	printf("%c",dizi[i]);
	}
void f2(char dizi[],int size)	// 2. ödev....
	{

	int i,k,j,l=0;
	k = strlen(dizi); //k ya karakter boyutu tanýmlandý...

	for(i=0;i<=k;i++) //döngü..
	{
		if(dizi[i] == ' ')
		{	
			j=i;                    
			for(j=i-1;j>=l;j--)			//döngü boþluða geldiðinde boþluktan bir önceden baþlar baþa kadar yazar..
			printf("%c",dizi[j]);   
			l=i;						//boþluðun olduðu yer integer olarak l'e atanýr..
		}
		if(dizi[i] == '\0')				//döngü sona yani kelimeden sonraki karaktere gelirse oradan baþlar..
		{
			printf(" ");		//ilk boþluk atar...bu iki kelime yazdýðýnda hata olmamasý için..
			j=i;			
			for(j=i-1;j>=l;j--)		//karýþýklýk olmasýn diye önceki yazdýðýmýz boþluða kadar 
			printf("%c",dizi[j]);
		}
	}

}
void f3(char c[])	//3. ödev.....
	{		
	char a[33] = {'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x'};
	char A[33] = {'A','B','C','Ç','D','E','F','G','Ð','H','I','Ý','J','K','L','M','N','O','Ö','P','R','S','Þ','T','U','Ü','V','Y','Z','Q','W','X' };	
	char s[33] ={ '0','1','2','3','4','5','6','7','8','9',' ','.'};
	int size = strlen(c);
	int i,kelimesayisi=1,furkan=0,j;
	for(i=0;i<size;i++)if(c[i]==' ')kelimesayisi++;//kelime için...
	


	for(i=0;i<size;i++){
		for(j=0;j<33;j++){
			if	(c[i] == a[j] || c[i] == A[j] || c[i] == s[j] )
				furkan++;
			}
	}	
	printf("\nCharacters:%d",size);
	printf("\n----------------------------------------------------------------");
	printf("\nWords:%d",kelimesayisi);
	printf("\n----------------------------------------------------------------");
	printf(	"\nSpecial Char:%d", size - furkan );
	
	}
void f4(char cumle[])  //4. ödev...
	{
	char harfler[33]={'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x'};
	int sayac[26]={0},i,j;
	int b = strlen(cumle);
	strlwr(cumle);    // büyük harfleri küçülten fonksiyon...
	printf("\n");
	for(i=0; i<b;i++ )//cümle boyutu
	{
		for(j=0; j<26;j++)
		if(cumle[i]==harfler[j])
		{
			sayac[j]++;
		}
	}
	for(i=0; i<26;i++)
	{
		if(sayac[i]==0)
		{
			continue;//eðer bir harften yoksa onu yazdýrmaz...
		}
		
		printf("%c:%d ",harfler[i],sayac[i]);
		
	}
	

}
void f5(char dizi[]) //5...ödev..
	{
	int i,j,k;

	int y = 1; 
	int bosluk[boyut / 2] = { 0 }, kelime[boyut / 2] = { 0 }; int atama[boyut / 2] = { 0 }; //3 farklý dizi oluþturduk ana diziden farklý..
	for (int i = 0; i <= strlen(dizi); i++) {
		if (dizi[i] == ' ' || dizi[i] == '\0') {
			bosluk[y] = i; //dizimizdeki boþluklarý bir diziye kaydettik int olarak. dizi[6] da boþluk varsa boþluk[1]=6 gibi..
			y++; //sonra artýrdýk..
			kelime[y - 1] = bosluk[y - 1] - bosluk[y - 2];//kelimelerin uzunluðunu kaydettik ilerde kullanýcaz..
		} 
	}
	for ( i = 0; i < y; i++) {
		for ( j = 1; j < y; j++) {
			if (kelime[i] > kelime[j]) { //kelimelerin uzunluklarýna göre puan alýyorlar en uzun olan en fazla puaný olucak.
				atama[i]++;
			
			}
		}
	}
		for (int i = y; i >= 0; i--) { //boþluðumuz+'\0' ýmýzýn olduðu þeyleri kaydettik y'de burdan baþladýk 0 a kadar indik..
			for (int j = 1; j <= y; j++) {
				if (atama[j] == i) { //geçici bir yere atadýk belleðimizde kaybolmasýn diye..
					for ( k = bosluk[j - 1]; k <= bosluk[j]; k++)
						printf("%c", dizi[k]);

				}
			}
		}
	}
void f6(char cumle[])   //6..arayayým mý?
	{
	char degisim2,harfler[33]={'a','b','c','ç','d','e','f','g','ð','h','ý','i','j','k','l','m','n','o','ö','p','r','s','þ','t','u','ü','v','y','z','q','w','x'};
	int sayac[33]={0},i,j,degisim1;
	
	strlwr(cumle);    // büyük harfleri küçülten fonksiyon..
	for(i=0; i<strlen(cumle);i++ )//cümle boyutu
	{
		for(j=0; j<33;j++)
		if(cumle[i]==harfler[j])
		{
			sayac[j]++;
		}
	}
	for(i=0; i<33; i++) 
	
	{
		for(j=0;j<33-i;j++)//-i
		{
			if(sayac[j]<sayac[j+1])
			{
				degisim1=sayac[j];		//Büyük olanlarýn yerleri deðiþiyor....(Sayi olanlarin)
				sayac[j]=sayac[j+1];
				sayac[j+1]=degisim1;
				
				degisim2=harfler[j];	//Ayni sekilde harflerin yerleri degisiyor...
				harfler[j]=harfler[j+1];
				harfler[j+1]=degisim2;
	
			}
		}
	}
	
	for(i=0;sayac[i]!=0;i++)
	{
	
		printf("%c",harfler[i]);
		if(sayac[i]!=sayac[i+1])
		{
			printf(" ");
		}
	}

}

int main()			//A.Furkan ÖZBEK  -  1306160017
{
	char dizi[boyut];
	printf("Enter a string:\t");
	gets(dizi);
	printf("\nThe size of the string: %d",f0(dizi)); // Boyutu bulduk.
	printf("\n----------------------------------------------------------------");
	printf("\nThe rewerse of the sentence:"); f1(dizi,f0(dizi)); //Ters çevirme fonksiyonu.
	printf("\n----------------------------------------------------------------");
	printf("\nThe rewerse of the word by word:");f2(dizi,f0(dizi));
	printf("\n----------------------------------------------------------------");f3(dizi);
	printf("\n----------------------------------------------------------------");f4(dizi);
	printf("\n----------------------------------------------------------------\nOrder words by length:");f5(dizi);
	printf("\n-----------------------------------------------------------------\nOrder characters by repetition:");f6(dizi);
	printf("\n\nGood bye:)");
	return 0;
	
}
