/*MODUL 2
Latihan 1*/
#include<stdio.h>
#include<conio.h>
main()
{
	char nama[20],gol;
	int jumjam,uphj,juml,uphl,uph;
	
	printf("=============================================================\n");
	printf("\t\tMenghitung  gaji karyawan mingguan\n");
	printf("=============================================================\n");
	printf("Nama              : ");scanf(" %[^\n]",&nama);
	printf("Golongan[A/B/C/D] : ");gol=getche();
	printf("\nJumlah Jam Kerja  : ");scanf("%i",&jumjam);
	printf("\n=============================================================\n");
	
	//RUMUS//
	//Menentukan Golongan//
	switch(gol)
	{
		case'a':
			{
				uphj=5000;
				gol='A';
			}
		case'A':
			{
				uphj=5000;
				break;
			}
		case'b':
			{
				uphj=7000;
				gol='B';
			}
		case'B':
			{
				uphj=7000;
				break;
			}
		case'c':
			{
				uphj=8000;
				gol='C';
			}
		case'C':
			{
				uphj=8000;
				break;
			}
		case'd':
			{
				uphj=10000;
				gol='D';
			}
		case'D':
			{
				uphj=10000;
				break;
			}
	}
	
	//Menentukan +Upah//
	if(jumjam>48)
	{
		juml=jumjam-48;
		uphl=4000*juml;
	}
	else
	{
		uphl=0;
	}
	
	//Total UPAH//
	uphj=uphj*jumjam;
	uph=uphj+uphl;
	
	//OUTPUT//
	printf("\nKepada %s dari Golongan %c\n",nama,gol);
	printf("Dengan Jam Kerja %i jam\n",jumjam);
	printf("Mendapat Upah Sebesar %i + Upah Lembur %i = %i\n",uphj,uphl,uph);
	getche();
}
