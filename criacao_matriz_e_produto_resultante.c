//Escreva um programa que leia duas matrizes 2x2 e calcule a matriz resultante do produto entre elas.
#include <stdio.h>

int main()
{
	//linha, coluna
	int matriz_A[2][2]; // declaração de matriz
	int matriz_B[2][2];
	int resultante_C[2][2]; // variavel para armazenar a produtos

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("Incluir elementos: ", i, j);
			scanf("%d", &matriz_A[i][j]);
		}
	}
	// 
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("%3d", matriz_A[i][j]); // indices
		}
		printf("\n");
	}
	//

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("Incluir elementos: ", i, j);
			scanf("%d", &matriz_B[i][j]);
		}
	}
	// 
	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("%3d", matriz_B[i][j]); // indices
		}
		printf("\n");
	}
	//

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
		  resultante_C[i][j] = matriz_A[i][j] * matriz_B[i][j];
		  printf("%3d", resultante_C[i][j]);

		}
		printf("\n");
	}
	//

	return 0;
}

// ERROS:
// realizando produto de elemento a elemento 