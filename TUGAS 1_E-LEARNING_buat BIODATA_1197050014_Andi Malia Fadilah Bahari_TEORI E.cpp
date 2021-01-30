//TUGAS 1_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//buat BIODATA//
#include<stdio.h>
#include<conio.h>
main()
{
	char nama[40],nim[10],kel[6],jur[30],fak[30],univ[30];
	int sem,thn;
	
	printf("Isi BIODATA dibawah\n");
	printf("Nama: ");
	scanf("%[^\n]",&nama);
	printf("NIM: ");
	scanf("%s",&nim);
	printf("Kelas: ");
	scanf(" %[^\n]",&kel);
	printf("Jurusan: ");
	scanf(" %[^\n]",&jur);
	printf("Fakultas: ");
	scanf(" %[^\n]",&fak);
	printf("Universitas: ");
	scanf(" %[^\n]",&univ);
	printf("Semester: ");
	scanf("%i",&sem);
	printf("Tahun: ");
	scanf("%i",&thn);
	
	printf("==========================================\n");
	printf("BIODATA\n");
	printf("Nama       : %s\n",nama);
	printf("NIM        : %s\n",nim);
	printf("Kelas      : %s\n",kel);
	printf("Jurusan    : %s\n",jur);
	printf("Fakultas   : %s\n",fak);
	printf("Universitas: %s\n",univ);
	printf("Semester   : %i\n",sem);
	printf("Tahun      : %i",thn);
}
