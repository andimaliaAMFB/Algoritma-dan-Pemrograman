//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 6
Hitung jarak tempuh, dengan kec v, dan waktu t (detik)!
	S = v * t*/
#include<stdio.h>
#include<conio.h>

int main()
{
	float v,t;
	printf("Program Menghitung Jarak Tempuh, dengan kec v, dan waktu t (detik)\n");
	printf("Masukan Kecepatan(m/s) total: ");
	scanf("%f",&v);
	printf("Masukan Waktu(s) total: ");
	scanf("%f",&t);
	
	printf("\nmaka, Jaraknya\n");
	printf("S= %f * %f = %f m",v,t,(v*t));
}
