//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.5//
/*Buatlah program untuk memeriksa apakah pemasukkan lebih besar / kecil dari pengeluaran?*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("Masukan Angka Pemasukan: ");
	scanf("%i",&a);
	printf("Masukan Angka Pengeluaran  : ");
	scanf("%i",&b);
	
	if(a==b)
		printf("Angka Pemasukan %i sama dengan Angka Pengeluaran %i",a,b);
	else
		if(a>b)
			printf("Angka Pemasukan %i lebih besar dari Angka Pengeluaran %i",a,b);
		else
			printf("Angka Pemasukan %i lebih kecil dari Angka Pengeluaran %i",a,b);
}


