//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.11//
/*Buat program untuk memvalidasi agar pembagian tidak dgn nol!*/
#include<stdio.h>

int main()
{
	float a,b;
	printf("Masukan Bilangan Pembilang: ");
	scanf("%f",&a);
	printf("Masukan Bilangan Penyebut : ");
	scanf("%f",&b);
	
	if(b==0)
		printf("Pembilang tidak bisa dibagi dengan %f dalam perhitungan disini",b);
	else
		printf("(%f)/(%f) = %f",a,b,a/b);
}
