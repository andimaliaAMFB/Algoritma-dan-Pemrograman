//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//soal 5//
/*
	Mencari bilangan terkecil dari 4 bilangan yang diinputkan!
	Mencari bilangan terbesar dari 4 bilangan yang diinputkan!
	Mengetahui apakah suatu bilangan 0, positif, atau negatif!*/
#include<stdio.h>

int main()
{
	int a,b,c,d,ma,mi,nol=0;
	printf("Masukan Bilangan Pertama : ");
	scanf("%i",&a);
	printf("Masukan Bilangan Kedua   : ");
	scanf("%i",&b);
	printf("Masukan Bilangan Ketiga  : ");
	scanf("%i",&c);
	printf("Masukan Bilangan Keempat : ");
	scanf("%i",&d);
	
	
	printf("=======================================\n\n");
	//menentukan bil terbesar dan terkecil//
	ma=a;
	if(b<=mi)
		mi=b;
	if(c<=mi)
		mi=c;
	if(d<=mi)
		mi=d;
	ma=a;
	if(b>=ma)
		ma=b;
	if(c>=ma)
		ma=c;
	if(d>=ma)
		ma=d;
	
	printf("Bilangan terkecil: %i\n",mi);
	printf("Bilangan terbesar: %i\n",ma);
	//menentukan bil terbesar dan terkecil//
	
	//menentukan banyak bilangan 0//
	if(a!=0&&b!=0&&c!=0&&d!=0)
	{
		printf("tidak ada bilangan yang bernilai 0");
	}
	else if(a==0&&b==0&&c==0&&d==0)
	{
		printf("Keempat bilangan yang dimasukan adalah %i",a);
	}
	else if(a==0||b==0||c==0||d==0)
	{
		if(a==0)
			nol++;
		if(b==0)
			nol++;
		if(c==0)
			nol++;
		if(d==0)
			nol++;
		printf("Ada %i bilangan yang bernilai 0",nol);
	}
	//menentukan banyak bilangan 0//
	printf("\n");
	
	//menentukan bilangan yang positif dan negatif//
	if(a==0&&b==0&&c==0&&d==0)
	{
		printf("tidak ada Bilangan yang positif dan negatif\n");
	}
	else
	{
		if(a>0||b>0||c>0||d>0)
		{
			printf("bilangan yang positif adalah ");
			if(a>0)
			{
				printf("%i",a);
				if(b>0||c>0||d>0)
					printf(", ");
				else
					printf("\n");
			}
			if(b>0)
			{
				if(a>0)
					if(c<=0&&d<=0)
						printf("dan ");
				printf("%i",b);
				if(c>0||d>0)
					printf(", ");
				else
					printf("\n");
			}
			if(c>0)
			{
				if(a>0||b>0)
					if(d<=0)
						printf("dan ");
				printf("%i",c);
				if(d>0)
					printf(", ");
				else
					printf("\n");
			}
			if(d>0)
			{
				if(a>0||b>0||c>0)
					printf("dan ");
				printf("%i\n",d);
			}
		}
		if(a<0||b<0||c<0||d<0)
		{
			printf("bilangan yang negatif adalah ");
			if(a<0)
			{
				printf("%i",a);
				if(b<0||c<0||d<0)
					printf(", ");
				else
					printf("\n");
			}
			if(b<0)
			{
				if(a<0)
					if(c>=0&&d>=0)
						printf("dan ");
				printf("%i",b);
				if(c<0||d<0)
					printf(", ");
				else
					printf("\n");
			}
			if(c<0)
			{
				if(a<0||b<0)
					if(d>=0)
						printf("dan ");
				printf("%i",c);
				if(d<0)
					printf(", ");
				else
					printf("\n");
			}
			if(d<0)
			{
				if(a<0||b<0||c<0)
					printf("dan ");
				printf("%i\n",d);
			}
		}
	}
	//menentukan bilangan yang positif dan negatif//
}
