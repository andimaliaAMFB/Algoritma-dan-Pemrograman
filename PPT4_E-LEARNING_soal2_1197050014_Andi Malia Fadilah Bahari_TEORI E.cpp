//TUGAS Sesi 4_E-LEARNING//
//1197050014_Andi Malia Fadilah Bahari//
//Kelas Teori E//
//Soal 2//
/*Buatlah program untuk mengetahui bilangan “tengah” dari 3 bilangan:
	Input: 23, 12, 9*/
#include<stdio.h>

main()
{
	int a,b,c;
	printf("Masukan Bilangan Pertama: ");
	scanf("%i",&a);
	printf("Masukan Bilangan Kedua  : ");
	scanf("%i",&b);
	printf("Masukan Bilangan Ketiga : ");
	scanf("%i",&c);
	
	if(a==b&&a==c)
		printf("%i adalah bilangan tengahnya",a);
	else
	{
		if(a>=b&&a>=c)
		{
			if(b>=c)
				printf("%i adalah bilangan tengahnya",b);
			else
				printf("%i adalah bilangan tengahnya",c);
		}
		else if(b>=a&&b>=c)
		{
			if(a>=c)
				printf("%i adalah bilangan tengahnya",a);
			else
				printf("%i adalah bilangan tengahnya",c);
		}
		else if(c>=a&&c>=b)
		{
			if(a>=b)
				printf("%i adalah bilangan tengahnya",a);
			else
				printf("%i adalah bilangan tengahnya",b);
		}
	}
}
