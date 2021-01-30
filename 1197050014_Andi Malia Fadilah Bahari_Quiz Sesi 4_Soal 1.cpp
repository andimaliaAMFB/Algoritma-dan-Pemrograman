/*Quiz Sesi 4
Soal 1*/
/*
Buatlah program untuk menghitung nilai rata-rata dari seorang siswa, 
dengan ketentuan sebagai berikut :
Nama Siswa, Nilai Pertandingan I, Nilai Pertandingan II, Nilai Pertandingan III diinput.
Nilai Rata-rata merupakan hasil dari Nilai Pertandingan I, II dan III dibagi dengan 3.
Ketentuan Mendapat Hadiah dari pertandingan :
Jika Nilai Rata-Rata >= 85, maka mendapat hadiah uang sebesar Rp. 5.000.000,-
Jika Nilai Rata-Rata >= 70, maka mendapat hadiah uang sebesar Rp. 2.500.000,-
Jika Nilai Rata-Rata < 70, maka mendapat hadiah hiburan*/
#include<stdio.h>
main()
{
	char n[20];
	int np1,np2,np3,nr;
	printf("Program untuk menghitung nilai rata-rata dari seorang siswa\n");
	printf("========================================================================\n");
	printf("Masukan Nama: ");
	scanf("%[^\n]",&n);
	printf("Masukan Nilai Pertandingan I: ");
	scanf("%i",&np1);
	printf("Masukan Nilai Pertandingan II: ");
	scanf("%i",&np2);
	printf("Masukan Nilai Pertandingan III: ");
	scanf("%i",&np3);
	printf("\n========================================================================\n");
	
	//perhitungan//
	nr=(np1+np2+np3)/3;
	//perhitungan//
	
	//output//
	printf("\n");
	printf("Selamat kepada %s telah memperoleh nilai rata-rata sebesar %i\n",n,nr);
	
	//pemilihan kondisi//
	if(nr>=85&&nr<=100)
	{
		printf("maka anda mendapat hadiah uang sebesar Rp. 5.000.000,-\n");
	}
	else if(nr>=70)
	{
		printf("maka anda mendapat hadiah uang sebesar Rp. 2.500.000,-\n");
	}
	else
	{
		printf("maka anda mendapat hadiah hiburan\n");
		printf("Terimakasih telah mengikuti kegiatan ini\n");
	}
	//pemilihan kondisi//
	
	printf("\n========================================================================");
	//output//
}
