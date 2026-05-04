/*
	Name: TabuadaRecursiva.cpp
	Author: Giovanni Tonsa
	Date: 04/05/26 11:14
	Description: Programa para solicitar ao usuario um número para exipir a tabuada de multiplicação
*/

# include <stdio.h>

//prototipação
int multiplicar(int);
int multiplo = 0;

main()
{
	int num;
	printf("Digite um numero para a sua tabuada: ");
	scanf("%d", &num);
	
	multiplicar(num);
}

int multiplicar(int num)
{
	if(multiplo == 10)
		return num;
	
	multiplo++;
	printf("\n%d X %d = %d", num, multiplo, num * multiplo);
	multiplicar(num);
}

