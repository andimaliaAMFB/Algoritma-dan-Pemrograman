//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 2
Buatlah program menghitung luas lingkaran!*/
#include<stdio.h>
#include<conio.h>

const float phi=3.14;

int main()
{
	float r;
	printf("===================================================\n");
	printf("Membuat program menghitung luas lingkaran!\n");
	printf("===================================================\n");
	printf("Masukan Jari-jari lingkaran: ");
	scanf("%f",&r);
	printf("===================================================\n\n");
	printf("Luas luas lingkaran= %f\n",(phi*r*r));
}
