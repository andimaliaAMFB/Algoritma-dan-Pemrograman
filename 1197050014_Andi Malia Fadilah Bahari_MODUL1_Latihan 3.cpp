/*algoritma untuk mengkonversi jarak x 
ke dalam kilometer-meter-sentimeter*/
//latihan 3//
#include<stdio.h>
main()
{
	int km,m,cm,x;
	printf("masukan jarak yang ditempuh (dalam cm): ");
	scanf("%i",&x);
	
	//rumus//
	km=x/100000;
	cm=x%100000;
	
	m=cm/100;
	cm=cm%100;
	//rumus//
	
	printf("Maka Jarak yang ditempuh: %i km",km);
	printf(" + %i m",m);
	printf(" + %i cm",cm);
}
