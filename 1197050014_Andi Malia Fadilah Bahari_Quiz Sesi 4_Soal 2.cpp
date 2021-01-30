/*Quiz Sesi 4
Soal 2*/
/*Buatlah program untuk menghitung nilai akhir seorang siswa dari kursus yang diikutinya.
Dengan ketentuan sebagai berikut :
	Nama Siswa, Nilai Keaktifan, Nilai Tugas dan Nilai Ujian diinput.
Proses yang dilakukan untuk mendapatkan nilai murni dari masing-masing nilai, adalah
	Nilai Murni Keaktifan = Nilai Keaktifaan dikalikan dengan 20%.
	Nilai Murni Tugas = Nilai Tugas dikalikan dengan 30%
	Nilai Murni Ujian = Nilai Ujian dikalikan dengan 50%
	Nilai Akhir adalah Nilai Murni Keaktifan + Nilai Murni Tugas + Nilai Murni Ujian
Ketentuan untuk mendapatkan grade nilai :
	Nilai Akhir >= 80 mendapat Grade A
	Nilai Akhir >= 70 mendapat Grade B
	Nilai Akhir >= 59 mendapat Grade C
	Nilai Akhir >= 50 mendapat Grade D
	Nilai Akhir < 50 mendapat Grade E */
#include<stdio.h>
main()
{
	char n[20];
	float nk,nt,nu,na;
	
	printf("Program untuk menghitung nilai akhir seorang siswa dari kursus yang diikutinya.\n");
	printf("===================================================================================\n");
	printf("Masukan Nama           : ");
	scanf("%[^\n]",&n);
	printf("Masukan Nilai Keaktifan: ");
	scanf("%f",&nk);
	printf("Masukan Nilai Tugas    : ");
	scanf("%f",&nt);
	printf("Masukan Nilai Ujian    : ");
	scanf("%f",&nu);
	printf("\n===================================================================================\n");
	
	//perhitungan//
	na=(nk*0.2)+(nt*0.3)+(nu*0.5);
	//perhitungan//
	
	//pemilihan kondisi//
	if(na>100||na<0)
	{
		printf("EROR\nMasukan Ulang nilai");
		return 0;
	}
	//pemilihan kondisi//
	
	//OUTPUT//
	printf("\n");
	printf("Nama           : %s\n",n);
	printf("Nilai Keaktifan: %f\n",nk);
	printf("Nilai Tugas    : %f\n",nt);
	printf("Nilai Ujian    : %f\n",nu);
	printf("Nilai Akhir    : %f dengan ",na);
	
	//pemilihan kondisi//
	if(na>=80)
	{
		printf("Grade A\n");
	}
	else if(na>=70)
	{
		printf("Grade B\n");
	}else if(na>=59)
	{
		printf("Grade C\n");
	}else if(na>=50)
	{
		printf("Grade D\n");
	}else
	{
		printf("Grade E\n");
	}
	//pemilihan kondisi//
	
	printf("\n===================================================================================");
	//OUTPUT//
}
