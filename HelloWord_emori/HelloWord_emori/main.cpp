#include<stdio.h>
#include<stdlib.h>
#include"Collabo.h"
#include"nanba.h"
int main(void)
{
	printf("HelloWorld\n");
	Collabo myEmori;
	myEmori.ShowName();

	printf("HelloWorld");
	nanba mynanba;
	mynanba.ShowName();
	system("pause");
	return 0;
}