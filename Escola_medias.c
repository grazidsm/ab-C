/*
    No colegio "Minha Escolinha", a nota bimestral de um aluno em uma disciplina é a média ponderada
    das notas parciais. A primeira nota parcial tem peso 2 e a segunda nota parcial tem peso 3. Faça um
    programa para obter o nome e as notas de um aluno em uma determinada disciplina e calcular sua média.
    Deve exibir:
    O aluno _____ obteve média ____

*/

#include <stdio.h>

int main(){

    char Nome[50];
    float N1, N2, Media; // notas parciais

    printf("Insira nome do aluno: ");
    scanf("%s", Nome);
    
    printf("Insira N1 parcial: ");
    scanf("%f", &N1);

    printf("Insira N2 parcial: ");
    scanf("%f", &N2);

    Media = (N1 * 2.0 + N2 * 3.0) / 5.0;

    printf("O aluno %s obteve media %.2f", Nome, Media);

}