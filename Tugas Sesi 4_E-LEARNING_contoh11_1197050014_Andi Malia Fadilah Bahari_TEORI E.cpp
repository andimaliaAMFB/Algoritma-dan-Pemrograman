//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//contoh 11//
#include<stdio.h>
#include<conio.h>
int main()
{
	char D[25]="Antonius Rachmat C";
	printf("12345678901234567890\n");
	printf("%s\n",D);/*semua karakter, rata kiri*/
	printf("%20s\n",D);/*lebar 20, rata kanan*/
	printf("%-20s\n",D);/*lebar 20, rata kiri*/
	printf("%20.5s\n",D);/*5 karakter lebar 20, rata kanan*/
	printf("%-20.5s\n",D);/*5 karakter lebar 20, rata kiri*/
	getch();
}
