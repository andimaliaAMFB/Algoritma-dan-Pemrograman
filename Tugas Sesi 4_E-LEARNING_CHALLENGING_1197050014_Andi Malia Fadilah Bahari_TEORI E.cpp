//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal CHALLENGING
Buatlah program untuk menghitung jumlah 2 buah pecahan dan sederhanakan
	Input: 3/2 + 2/3
	Proses: 9/6 + 4/6
	Output: 13/6 => 2 1/6
	Input: 2/6 + 1/8
	Proses: 6/48 + 16/48 = 22/48 => 11/24*/
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
	
	printf("%25i %3i%4i +%2i%5i\n",px1,px2,(px1*p2),(px2*p1),((px1*p2)+(px2*p1)));
	printf("maka penjumlahan antara _ + _ = _____ = __\n");
	printf("%25i %3i%6i%7i\n",p1,p2,(p1*p2),(p1*p2));
}
