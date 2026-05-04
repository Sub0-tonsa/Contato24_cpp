/*
	Name: Recursividade1.cpp
	Author: Giovanni Tonsa
	Date: 04/05/26 10:54
	Description: Programa para demonstrar a implementação de funçoes recursivas
*/

# include <stdio.h>

//prototipação
void linha(int);

main()
{
	linha(30);
}

void linha(int x)
{
	if (x == 0)
		return;
	
	printf("-*");
	linha(--x); //invoke recursivo
}
