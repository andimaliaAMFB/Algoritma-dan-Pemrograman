//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 4//
/*Buatlah program diskon:
	Inputan adalah jumlah total pembelian dan jumlah barang.
		Jika total pembelian >= 500000 dan jumlah barang > 5 maka bonusnya Setrika
		Jika total pembelian >= 100000 dan jumlah barang > 3 maka bonusnya Payung
		Jika total pembelian >=50000 atau jumlah barang > 2 maka bonusnya ballpoint
		Selainnya itu tidak mendapat bonus.*/
#include<stdio.h>

int main()
{
	int tp,b;
	printf("Masukan Total Pembelian: ");
	scanf("%i",&tp);
	printf("Masukan Jumlah Barang  : ");
	scanf("%i",&b);
	
	if(tp>=500000&&b>=5)
		printf("Anda Mendapat Bonus Setrika");
	else if(tp>=100000&&b>=3)
		printf("Anda Mendapat Bonus Payung");
	else if(tp>=50000&&b>=2)
		printf("Anda Mendapat Bonus Ballpoint");
	else
		printf("Maaf anda tidak mendapatkan bonus");
}
