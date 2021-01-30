//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 4
Buatlah program konversi suhu, dari Celcius jadi Reamur, dan Fahrenheit. 
	F = 9/5 * C + 32
	R = 4/5 * C*/
#include<stdio.h>
#include<conio.h>

int main()
{
	float c,r,f;
	printf("==========================================================================\n");
	printf("Membuat program konversi suhu, dari Celcius jadi Reamur, dan Fahrenheit.\n");
	printf("==========================================================================\n");
	printf("Masukan Suhu (C): ");
	scanf("%f",&c);
	
	r=c*4/5;
	f=c*9/5 + 32;
	printf("Maka Suhu Reamurnya    = %f\n",r);
	printf("Maka Suhu Fahrenheitnya= %f\n",f);
}
