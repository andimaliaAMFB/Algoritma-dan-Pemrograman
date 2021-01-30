/*MODUL 2
Contoh 4*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char nama[15],ket[30],kode;
	printf("Masukan nama mahasiswa: ");
	scanf(" %[^\n]",&nama);
	printf("Pilih kode jurusan [A/B/C/D]: ");
	kode=getche();
	switch(kode)
	{
		case'a':
		{
			strcpy(ket,"Jurusan Teknik Informatika");
		}
		case'A':
		{
			strcpy(ket,"Jurusan Teknik Informatika");
			break;
		}
		case'b':
		{
			strcpy(ket,"Jurusan Manajemen Informatika");
		}
		case'B':
		{
			strcpy(ket,"Jurusan Manajemen Informatika");
			break;
		}
		case'c':
		{
			strcpy(ket,"Jurusan Sistem Informatika");
		}
		case'C':
		{
			strcpy(ket,"Jurusan Sistem Informatika");
			break;
		}
		case'd':
		{
			strcpy(ket,"Jurusan Teknik Komputer");
		}
		case'D':
		{
			strcpy(ket,"Jurusan Teknik Komputer");
			break;
		}
	}
	
	printf("\n\n");
	printf("Nama mahasiswa: %s\n",nama);
	printf("Kode Jurusan  : %c\n",kode);
	printf("Nama Jurusan  : %s\n",ket);
	getch();
}
