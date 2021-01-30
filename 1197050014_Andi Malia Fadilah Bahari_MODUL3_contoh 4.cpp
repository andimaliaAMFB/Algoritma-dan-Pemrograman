/*MODUL 3
Contoh 4*/
#include<stdio.h>
main()
{
	int n,i,j;
	printf("Contoh Loop Bersarang --> Bintang Segitiga Siku \n\n");
	printf("Masukan tinggi segitiga: ");
	scanf("%i",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
