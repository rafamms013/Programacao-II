#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercicios em C:
    /* 01 - Encontre o maior n�mero e o menor n�mero entre tr�s numeros digitados*/


    int main() {
    int a, b, c, maior, menor;


    printf("Digite tr�s n�meros: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;

    menor = a;
    if(b < menor) menor = b;
    if(c < menor) menor = c;


    printf("Maior n�mero: %d\n", maior);
    printf("Menor n�mero: %d\n", menor);

return 0;
}











    /* 02 - Informe a quantidade de n�meros positivos, negativos e de zeros ap�s digitar 5 numeros */
    /* 03 - Leia e informe se ele � divisivel por 2, por 3 ou por 5*/
    /* 04 - Crie um programa que permita ao usuario escolher entre fazer a convers�o cambial de real para dolar ou de D�lar para Real. Utilize commo taxa de c�mbio $1 igual a R$5.30*/
    /* 05 - */


