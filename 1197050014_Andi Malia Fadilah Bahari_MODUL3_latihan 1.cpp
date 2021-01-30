/*MODUL 3
Latihan 1
Buatlah algoritma untuk menghitung jumlah N buah bilangan ganjil pertama
(yaitu, 1+3+5+...). Catatan: N adalah bilangan bulat tidak negatif.*/
#include<stdio.h>
main()
{
	int n,i,bil=1;
	printf("Menghitung jumlah N buah bilangan ganjil pertama\n");
	printf("====================================================\n");
	printf("Masukan banyak bilangan yang akan dimasukkan: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{
		printf("%i",bil);
		if(i<n)
			printf(" + ");
		bil+=2;
	}
}
