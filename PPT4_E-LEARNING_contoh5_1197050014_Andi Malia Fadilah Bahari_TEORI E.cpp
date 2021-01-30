//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//contoh 5//
#include<stdio.h>
#include<conio.h>
#include<cstdlib>

int main()
{
	int hari=5;
	system("cls");
	printf("Hari ini adalah hari ");
	switch(hari)
	{
		case 1:
			printf("Minggu");
			break;
		case 2:
			printf("Senin");
			break;
		case 3:
			printf("Selas");
			break;
		case 4:
			printf("Rabu");
			break;
		case 5:
			printf("Kamis");
			break;
		case 6:
			printf("Jumat");
			break;
		case 7:
			printf("Sabtu");
			break;
		default:
			printf("Tidak ada hari lebih dari 7");
	}
	printf("\n");
}
