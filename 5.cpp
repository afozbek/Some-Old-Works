#include <stdio.h>
#include <string.h>
#define boyut 400

int main()
{
	int i;
	char ch[boyut];
	printf("Bir Girisi Yapiniz :");
	gets(ch);
	int x = 1; // x i tanýmlýyoruz tm sayý olduðu için "integer(türkçesi tam sayý demek)"
	int bosluk[boyut / 2] = { 0 }, kelime[boyut / 2] = { 0 }; int gecici[boyut / 2] = { 0 };
	for (int i = 0; i <= strlen(ch); i++) {
		if (ch[i] == ' ' || ch[i] == '\0') {
			bosluk[x] = i;
			x++; // x=2
			kelime[x - 1] = bosluk[x - 1] - bosluk[x - 2];
		} 
	}
	for (int i = 0; i < x; i++) {
		for (int j = 1; j < x; j++) {
			if (kelime[i] > kelime[j]) {
				gecici[i]++;
				// 4 8 7 9
				// gecici[1]=0 gecici[2]=2 gecici[3]=1 gecici[4]=3
			}
		}
	}
		for (int i = x; i >= 0; i--) {
			for (int j = 1; j <= x; j++) {
				if (gecici[j] == i) {
					for (int k = bosluk[j - 1]; k <= bosluk[j]; k++)
						printf("%c", ch[k]);

				}
				printf(" ");
			}
		}
		
}
