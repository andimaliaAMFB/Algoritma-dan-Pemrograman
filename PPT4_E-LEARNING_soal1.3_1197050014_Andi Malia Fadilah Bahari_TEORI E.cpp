//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.3//
/*Buatlah program untuk memvalidasi umur (1- 100 tahun)!*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan umur anda: ");
	scanf("%i",&a);
	
	if(a>=1&&a<=100)
	{
		if(a>=18)
			printf("Anda diperbolehkan Masuk");
		else
			printf("Anda belum diperbolehkan Masuk");
	}
	else
		printf("EROR\nMasukan lagi Umur Anda");
}


