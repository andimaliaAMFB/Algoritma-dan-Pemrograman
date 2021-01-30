/*MODUL 2
Contoh 1*/
#include<stdio.h>
main()
{
	char huruf;
	printf("Program Menentukan Huruf Vokal\n");
	printf("------------------------------\n\n");
	printf("Masukan huruf: ");
	scanf("%c",&huruf);
	if(huruf=='a'||huruf=='i'||huruf=='u'||huruf=='e'||huruf=='o')
		printf("Huruf %c adalah huruf vokal\n",huruf);
}
