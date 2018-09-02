#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <conio.h>
int ftype2(char **,int,int);
void fprint2(char **,int);
int main() {
	char **s;
	printf("PLease type any sentence.(Type '.'(dat) to finish.)\n");
	s=(char **)malloc(30*sizeof(char));// Kelime sayýsý.
	for(int i=1;i<30;i++){
		s[i]=(char **)malloc(40*sizeof(char));// Kelime uzunluðu.
		}
	fprint2(s,ftype2(s,30,40));
	for(int i=1;i<30;i++)free(s[i]);
	free(s);
}
int ftype2(char **s,int _1end,int _2end){
	int j=0;
	for(int i=1;i<_1end;i++){printf("\n The i=%d\n",i);// i=6 ve katlarýnda eror alýyorum. scanf'den kaynaklý bir sorun var J=0'ý yazýyor.
		for( j=0;j<_2end;j++){printf("The j=%d   ",j);
			scanf("%c",&s[i][j]); printf("Veri alindi\t");
			printf("s[%d][%d]=%c\n",i,j,s[i][j]);
			if(s[i][j]==' '||s[i][j]=='.')break;
	}
	printf("%d",j);
	
		if(s[i][j]=='.'){ getchar();s[i][j]='\0';printf("\n Son olan:s[%d][%d]%c-----\n",i,j,s[i][j]);break;}
	}
	return j;
}
void fprint2(char **s,int end){
	int i=1; 
	do{
		for(int j=0;s[i][j]!=' ' && s[i][j]!='\0';j++){
			printf("%c",s[i][j]);
		}
		printf(" ");
		i++;
	}while(s[i-1][end]!='\0');
}
