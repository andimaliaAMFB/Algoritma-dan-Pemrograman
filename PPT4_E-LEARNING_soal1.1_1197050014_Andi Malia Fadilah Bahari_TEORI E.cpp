//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.1//
/*Buatlah program untuk memeriksa bilangan genap atau ganjil*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan bilangan: ");
	scanf("%i",&a);
	
	if(a==0)
		printf("bilangan %i adalah angka nol",a);
	else
		if(a%2==0)
			printf("bilangan %i adalah bilangan Genap",a);
		else
			printf("bilangan %i adalah bilangan Ganjil",a);
}


