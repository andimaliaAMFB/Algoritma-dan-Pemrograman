//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 8//
/*Membuat konversi dari bilangan yang diinputkan sebagai berikut:
	Misal 101 : bilangan ratusan
	Misal 1200: bilangan ribuan
	Misal 11  : bilangan puluhan*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan Sebuah Bilangan: ");
	scanf("%i",&a);
	
	if(a==0)
		printf("%i: bilangan nol",a);
	else if(a>0&&a<10)
		printf("%i: bilangan satuan",a);
	else if(a>=10&&a<100)
		printf("%i: bilangan puluhan",a);
	else if(a>=100&&a<1000)
		printf("%i: bilangan ratusan",a);
	else if(a>=1000&&a<10000)
		printf("%i: bilangan ribuan",a);
	else if(a>=10000&&a<100000)
		printf("%i: bilangan puluhan ribu",a);
	else if(a>=100000&&a<1000000)
		printf("%i: bilangan ratusan ribu",a);
	else if(a>=10^6&&a<10^7)
		printf("%i: bilangan jutaan",a);
	else if(a>=10^7&&a<10^8)
		printf("%i: bilangan puluhan juta",a);
	else if(a>=10^8&&a<10^9)
		printf("%i: bilangan ratusan juta",a);
	else if(a>=10^9&&a<10^10)
		printf("%i: bilangan miliyaran",a);
	else if(a>=10^10&&a<10^11)
		printf("%i: bilangan puluhan miliyar",a);
	else if(a>=10^11&&a<10^12)
		printf("%i: bilangan ratusan miliyar",a);
	else if(a>=10^12&&a<10^13)
		printf("%i: bilangan triliun.",a);
}
