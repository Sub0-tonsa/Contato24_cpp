/*
	Name: Fatorial.cpp 
	Author: Giovanni Tonsa
	Date: 04/05/26 11:40
	Description: Programa que calcula fatorial com recursividade
*/

# include <stdio.h>

//prototipação
int fatorial(int);
int fat = 1;

main()
{
	int num;
	printf("Digite um numero para ser fatorado: ");
	scanf("%d", &num);
	printf("%d! = ",num);
	printf(" = %d", fatorial(num));
}

int fatorial(int num)
{
	if(num == 1)
	{
		printf("%d", num);
		return fat;
	}
	
	fat = fat * num;
	printf("%d X ", num);
	fatorial(--num);
}
