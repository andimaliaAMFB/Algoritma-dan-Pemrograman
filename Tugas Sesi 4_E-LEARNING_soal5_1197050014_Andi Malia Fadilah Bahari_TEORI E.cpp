//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 5
Buatlah program konversi detik ke hari, jam, menit, detik!
	Rumus :	1 hari = 86400 detik; 1 jam = 3600 detik dan 1 menit = 60 detik.*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int d,m,j,h;
	printf("Program mengkonversi detik ke hari, jam, menit, detik")
	printf("Masukan Jumlah detik: ");
	scanf("%i",&d);
	
	h=d/86400;
	d=d%86400;
	
	j=d/3600;
	d=d%3600;
	
	m=d/60;
	d=d%60;
	
	printf("Maka Total waktu adalah %i hari %i jam %i menit %i detik",h,j,m,d);
}
