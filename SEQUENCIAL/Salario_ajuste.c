/*
  faça um programa que recebe como entrada o nome e o salário de um funcionário de uma empresa
    e que calcule o novo valor do salário do funcionário levando em consideração que esse teve
        aumento de 25%. O programa deve exibir na saída a seguinte frase:
        "O funcionario ______ teve um aumento de R$ _____ e passará a receber um salário de R$ ______"
*/

#include <stdio.h>

int main()
{
    char Nome[20];
    float Salario, ajusteSal;

    printf("Insira nome do Funcionario: ");
    scanf("%s", Nome);

    printf("Insira Salario atual do Funcionario: ");
    scanf("%f", &Salario);

    ajusteSal = Salario * 0.25;
    Salario += ajusteSal;

    printf("O funcionario %s teve um aumento de R$ %2.f e passara a receber um salario de R$ %2.f", Nome, ajusteSal, Salario);

    return 0;
}