//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.2//
/*Buatlah program untuk memeriksa bilangan terbesar dari 2 bilangan*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("Masukan Bilangan Pertama: ");
	scanf("%i",&a);
	printf("Masukan Bilangan Kedua  : ");
	scanf("%i",&b);
	
	if(a==b)
		printf("%i adalah angka yang sama dengan %i",a,b);
	else
		if(a>b)
			printf("%i adalah bilangan terbesar",a);
		else
			printf("%i adalah bilangan terbesar",b);
}


