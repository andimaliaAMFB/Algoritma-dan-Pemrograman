//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.4//
/*Buatlah program untuk memeriksa bilangan negatif atau positif!*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan bilangan: ");
	scanf("%i",&a);
	
	if(a!=0)
	{
		if(a<0)
			printf("%i adalah bilangan negatif",a);
		else
			printf("%i adalah bilangan positif",a);
	}
	else
		printf("%i adalah angka nol",a);
}


