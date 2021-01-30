//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.8//
/*Buatlah program untuk mengetahui kuadran
dari inputan koordinat x dan y!*/
#include<stdio.h>

int main()
{
	int a,b;
	printf("Masukan koordinat x-nya: ");
	scanf("%i",&a);
	printf("Masukan koordinat y-nya: ");
	scanf("%i",&b);
	
	if(a==0&&b==0)
		printf("'Benda' berada pada koordinat (%i,%i)",a,b);
	else
	{
		if(a>0)
		{
			if(b>0)
				printf("'Benda'' berada pada KUADRAN I, koordinat (%i,%i)",a,b);
			else
				printf("'Benda'' berada pada KUADRAN IV, koordinat (%i,%i)",a,b);
		}
		else
		{
			if(b>0)
				printf("'Benda'' berada pada KUADRAN II, koordinat (%i,%i)",a,b);
			else
				printf("'Benda'' berada pada KUADRAN III, koordinat (%i,%i)",a,b);
		}
	}
}


