//Latihan 2//
#include<stdio.h>
main()
{
	float s,a,t,ls4,ls3,ltp;
	printf("Menghitung luas bangun Bujur Sangkar, Segitiga, dan Trapesium\n\n");
	printf("Masukan panjang sisi Bujur Sangkar: "); scanf("%f",&s);
	ls4=s*s;
	printf("====================================== \n");
	printf("Masukan panjang alas Segitiga: "); scanf("%f",&a);
	printf("Masukan tinggi Segitiga      : "); scanf("%f",&t);
	ls3=0.5*a*t;
	printf("====================================== \n");
	printf("Masukan panjang alas Trapesium: "); scanf("%f",&a);
	printf("Masukan tinggi Trapesium: "); scanf("%f",&t);
	ltp=a*t;
	
	printf("====================================== \n");
	
	printf("Luas Dari Bujur sangkar Tersebut adalah = %f \n",ls4);
	printf("Luas Dari Segitiga Tersebut adalah = %f \n",ls3);
	printf("Luas Dari Trapesium Tersebut adalah = %f \n",ltp);
}
