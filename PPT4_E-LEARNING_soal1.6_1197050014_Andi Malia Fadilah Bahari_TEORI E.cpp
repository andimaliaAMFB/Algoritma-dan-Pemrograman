//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.6//
/*Buatlah program untuk mengetahui bentuk suatu zat (beku atau tidak!)*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan Suhu air: ");
	scanf("%i",&a);
	
	if(a<=0)
		printf("Zat Air Berbentuk Beku");
	else if(a>0&&a<100)
		printf("Zat Air Berbentuk Cair");
	else
		printf("Zat Air Berbentuk Gas");
}


