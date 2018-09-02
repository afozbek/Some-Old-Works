
int main()
{
	int i, j = 0, k = 0, x, len, uzunluk = 0, bosluk = 0, harf_tekrari[100] = { 0 };
	char a[] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
	char b[] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
	char c[] = { '1','2','3','4','5','6','7','8','9',' '};
	char metin[100], str1[10][20], temp;
	
	int karakter = 0;
	printf("enter the string :");
	gets(metin);
	int s = strlen(metin);




for (i = 0; i < s; ++i)
	{
		for (j = 0; j < 40; ++j)

		{
			if (metin[i] == a[j] || metin[i] == b[j] || metin[i] == c[j])
				karakter++;
		}

	}
	printf("ozel karakter:%d", s - karakter);
	return 0;

}
