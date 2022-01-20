#include <stdio.h>
#include <stdlib.h>

/*6. Escreva um programa que leia uma letra do alfabeto das letras maiúsculas.

Identificar qual letra foi digitado, ou seja, se foi A,B,C,....X,Y,Z.*/



int main()
{
    char letra;

    printf("Digite uma letra: ");
    scanf("%c", &letra);

    printf("\n\n");
    if('A' <= letra && letra <= 'Z')
        printf("A letra digitada foi.....: %c \n", letra);
    else
        printf("AVISO!!! A  letra digitada nao eh maiuscula. \n ");

    return 0;
}
