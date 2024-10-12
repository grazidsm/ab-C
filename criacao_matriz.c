#include <stdio.h>

// tentativa 3823824 de fazer uma  matriz

int main()
{
	//linha, coluna
	int matriz[2][2]; // declaração de matriz

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("Incluir elementos: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}

	for (int i=0; i<2; i++)
	{
		for (int j=0; j<2; j++)
		{
			printf("%3d", matriz[i][j]); // indices
		}
		printf("\n");
	}
	return 0;
}

/*
 ERROS:
   - matriz imprime as duas linhas
	- erro está ocorrendo nas colunas
	- mudei de 2x3 par 2x2
	- retorno sem valores, matriz está vazia
	- primeiramente é necessário ler os valores da  matriz em um for
	depois criar um para printar rs
	- sim é necessário referenciar o scanf
	- erro tela preta
	- resolvido: é necessário sempre incluir os elementos girl.
*/