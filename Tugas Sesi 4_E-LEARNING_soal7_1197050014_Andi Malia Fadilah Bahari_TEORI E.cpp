//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 7
Perkalian 2 pecahan: 
	P1 = ¾
	P2 = 2/3
	Hasil = (3 x 2) / (3 x 4) => 1 1/8*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int px1,p1,px2,p2;
	printf("Program Menghitung Perkalian 2 pecahan\n");
	printf("Masukan Pembilang pertama: ");
	scanf("%i",&px1);
	printf("Masukan Penyebut pertama : ");
	scanf("%i",&p1);
	printf("\n");
	printf("Masukan Pembilang kedua  : ");
	scanf("%i",&px2);
	printf("Masukan Penyebut kedua   : ");
	scanf("%i",&p2);
	
	printf("%23i %3i%4i\n",px1,px2,(px1*px2));
	printf("maka perkalian antara _ x _ = _\n");
	printf("%23i %3i%4i\n",p1,p2,(p1*p2));
}
