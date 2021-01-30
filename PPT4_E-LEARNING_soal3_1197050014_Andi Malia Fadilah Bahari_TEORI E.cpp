//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 3//
/*Buatlah program yang menerima inputan 3 buah panjang sisi segitiga*/
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Masukan Panjang sisi 1: ");
	scanf("%i",&a);
	printf("Masukan Panjang sisi 2: ");
	scanf("%i",&b);
	printf("Masukan Panjang sisi 3: ");
	scanf("%i",&c);
	
	if(a==b&&b==c)
		printf("Segitiga merupakan Segitiga sama sisi");
	else if(a==b||b==c)
	{
		if(a!=c||a!=b)
		{
			printf("Segitiga merupakan Segitiga sama kaki");
		}
	}
	else if(a==c||c==b)
	{
		if(a!=b)
		{
			printf("Segitiga merupakan Segitiga sama kaki");
		}
	}
	else
		printf("Segitiga merupakan Segitiga sembarang");
}


