/*MODUL 3
Contoh 3*/
#include<stdio.h>
main()
{
	int n,i,max,min,bil;
	printf("Program mencari data terbesar dan terkecil\n\n");
	printf("Masukan banyaknya data= ");
	scanf("%d",&n);
	printf("Masukan bilangan ke-1: ");
	scanf("%d",&bil);
	max=bil;
	min=bil;
	for(i=2;i<=n;i++)
	{
		printf("Masukkan biangan ke-%d: ",i);
		scanf("%d",&bil);
		if(bil>max)
			max=bil;
		if(bil<max)
			min=bil;
	}
	printf("\n");
	printf("Data terbesar %d \n",max);
	printf("Data terkecil %d \n",min);
}
