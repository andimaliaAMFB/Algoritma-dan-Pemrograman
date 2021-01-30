//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 3
Buatlah program penghitung rumus sebagai berikut:
E = mc^2	*/
#include<stdio.h>
#include<conio.h>

int main()
{
	float m,c;
	printf("===================================================\n");
	printf("Membuat program menghitung Rumus E = mc^2\n");
	printf("===================================================\n");
	printf("Masukan satuan m: ");
	scanf("%f",&m);
	printf("Masukan satuan c: ");
	scanf("%f",&c);
	printf("===================================================\n\n");
	printf("E = mc^2 = %f\n",(m*c*c));
}
