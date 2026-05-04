/*
	Name: ContagemRegressiva.cpp
	Author: Giovanni Tonsa
	Date: 04/05/26 11:06
	Description: Programa para demonstrar uma contagem regressiva por meio de uma função recursiva.
*/

# include <stdio.h>

//prototipação
int contagemRegressiva(int);
int limite = 0;

main()
{
	int num;
	printf("Digite um numero para iniciar a contagem regressiva: ");
	scanf("%d", &num);
	limite = num * -1;
	
	contagemRegressiva(num);	
}

int contagemRegressiva(int num)
{
	if(num < limite)
		return num;
	printf("%d,",num);
	contagemRegressiva(--num);
}
