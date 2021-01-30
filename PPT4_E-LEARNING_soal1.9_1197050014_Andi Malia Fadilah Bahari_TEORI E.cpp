//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.9//
/*Buatlah program untuk mencari bilangan terbesar dari 3 bilangan yang diinputkan dengan menggunakan IF!*/
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Masukan Bilangan Pertama: ");
	scanf("%i",&a);
	printf("Masukan Bilangan Kedua  : ");
	scanf("%i",&b);
	printf("Masukan Bilangan Ketiga : ");
	scanf("%i",&c);
	
	if(a==b&&a==c)
		printf("ketiga bilangan bernilai sama",a);
	else
		if(a>=b&&a>=c)
			printf("%i adalah bilangan terbesar",a);
		else if(b>=a&&b>=c)
			printf("%i adalah bilangan terbesar",b);
		else
			printf("%i adalah bilangan terbesar",c);
	
}
