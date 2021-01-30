//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
/*soal 9
Menghitung upah gaji per jam seorang pegawai, jika per jam @ 5000!*/
#include<stdio.h>
#include<iomanip>

int main()
{
	int j;
	printf("Program Menghitung upah gaji per jam seorang pegawai\n\n");
	printf("Masukan Jumlah jam: ");
	scanf("%i",&j);
	system("cls");
	printf("Anda telah bekerja selama %i jam,\nmaka anda mendapatkan gaji sebesar %i rupiah\n",j,(j*5000));
}
