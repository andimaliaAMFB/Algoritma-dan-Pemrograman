//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 1.10//
/*Buatlah program untuk memeriksa apakah suatu bilangan 
habis dibagi 5 dan habis dibagi 3 sekaliguts atau tidak?*/
#include<stdio.h>

int main()
{
	int a;
	printf("Masukan Suatu Bilangan: ");
	scanf("%i",&a);
	
	if(a%5==0&&a%3==0)
		printf("%i habis dibagi 5 dan habis dibagi 3 sekaligus",a);
	else
		printf("%i tidak dapat habis dibagi 5 dan habis dibagi 3 sekaligus",a);
}
