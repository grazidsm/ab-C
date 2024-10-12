/*
	Escreva um programa que inicialize uma matriz 3x3 com valores ]
	fornecidos pelo próprio código (sem entrada do usuário)
	e imprima-a em formato de matriz.
*/

#include <stdio.h>

int main()
{
	int matriz [3][3] = {{1,2,3}, {4,5,6}, {7,8,9}}; // declaração de matriz e seus valores fixos

	for (int i=0; i<3; i++) // linha
	{
		for (int j=0; j<3; j++) // coluna
		{
			printf("%3d", matriz[i][j]);
		}
		printf("\n");
	}

	return 0;

}