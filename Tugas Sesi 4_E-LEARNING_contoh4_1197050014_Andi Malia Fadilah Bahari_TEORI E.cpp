//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//contoh 4//
#include<stdio.h>
#include<conio.h>

int main()
{
	int a=5;
	int b=2;
	float c=5.0;
	float d=2.0;
	
	printf("5/2 dalam int = %d\n",(a/b));
	printf("5.0/2.0 dalam float = %2f\n",(c/d));
	
	
	printf("5/2 dalam float = %2f\n",(a/b));
	printf("5.0/2.0 dalam int = %d\n",(c/d));
	
	printf("5/2 cast float = %2f\n",((float)a/b));
	printf("5/2 cast float = %d\n",((float)a/(float)b));
	
	printf("5.0/2.0 cast int = %2f\n",((int)c/d));
	printf("5.0/2.0 cast int = %2f\n",((int)c/(int)d));	
}
