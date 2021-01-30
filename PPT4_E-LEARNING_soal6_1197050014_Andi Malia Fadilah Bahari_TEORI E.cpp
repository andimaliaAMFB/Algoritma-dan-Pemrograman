//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 6//
/*Buatlah konversi nilai huruf dari nilai yang diinputkan user!
	A=80-100
	B=65-79
	C=50-64
	D=35-49
	E=0-34*/
#include<stdio.h>

int main()
{
	int n;
	printf("Masukan Nilai Anda: ");
	scanf("%i",&n);
	
	if(n>=80&&n<=100)
		printf("Grade A");
	else if(n>=65&&n<=79)
		printf("Grade B");
	else if(n>=50&&n<=64)
		printf("Grade C");
	else if(n>=35&&n<=49)
		printf("Grade D");
	else if(n>=0&&n<=34)
		printf("Grade E");
}
