// aula1010_funcoes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>


void HelloWorld()//funcao que nao tem retorno
{
	printf("Hello World!\n");

}

int Soma2Valores(int a, int b)
{
	int c;
	c = a + b;
	return c; //retornar o valor que a funcao executou
	//pode usar tambem "return a + b" para informacoes mais simples
}
int lervalorinteiro()
{
	int variavel;
	printf("\n INFORME O PRIMEIRO VALOR");
	scanf_s("%i", &variavel);
		return variavel;
}


int main()

{
	
	int primeirovalor = lervalorinteiro();
	int segundovalor = lervalorinteiro();

	HelloWorld();
	int d = Soma2Valores(primeirovalor, segundovalor );//chamando a funcao 
	printf("\Resultado: %i\n", d);//mostrar o resultado

	system("pause");
    return 0;
}
