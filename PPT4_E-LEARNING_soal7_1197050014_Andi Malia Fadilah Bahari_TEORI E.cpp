//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 7//
/*Buat program untuk menghitung luas segitiga, luas lingkaran, 
dan luas persegi panjang dengan menggunakan sistem menu.*/
#include<stdio.h>

int main()
{
	int pilih;
	float s,a,t,ls4,ls3,ltp;
	printf("Menghitung luas bangun\n");
	printf("1.)Bujur Sangkar\n2.)Segitiga\n3.)Trapesium\n");
	printf("Pilih salah satu: ");
	scanf("%i",&pilih);
	
	if(pilih<1&&pilih>3)
		printf("EROR\nSilahkan Pilih Ulang");
	else if(pilih>=1&&pilih<=3)
	{
		if(pilih==1)
		{
			printf("Masukan panjang sisi Bujur Sangkar: ");
			scanf("%f",&s);
			ls4=s*s;
			printf("====================================== \n");
			printf("Luas Dari Bujur sangkar Tersebut adalah = %f \n",ls4);
		}
		else if(pilih==2)
		{
			printf("Masukan panjang alas Segitiga: ");
			scanf("%f",&a);
			printf("Masukan panjang alas Segitiga: ");
			scanf("%f",&t);
			ls3=0.5*a*t;
			printf("====================================== \n");
			printf("Luas Dari Segitiga Tersebut adalah = %f \n",ls3);
		}
		else
		{
			printf("Masukan panjang alas Trapesium: "); scanf("%f",&a);
			printf("Masukan panjang alas Trapesium: "); scanf("%f",&t);
			ltp=a*t;	
			printf("====================================== \n");
			printf("Luas Dari Trapesium Tersebut adalah = %f \n",ltp);
		}
	}
}
