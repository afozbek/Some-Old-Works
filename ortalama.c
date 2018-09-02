

int main()
{

float ortalama;
int nots,sayac,toplam;	

printf("Not Giriniz\n\n");
scanf("%d",&nots);

sayac=0;
toplam=0;

while(sayac<4)
{
toplam=toplam+nots;
sayac=sayac+1;
printf("Not Giriniz\n\n");
scanf("%d",&nots);
}
{
ortalama=(float)toplam/sayac;
printf("Sinif ortalamasý %.2f",ortalama);
}


return 0;

}

