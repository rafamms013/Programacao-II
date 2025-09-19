#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exercicios em C:
    /* 01 - Encontre o maior número e o menor número entre três numeros digitados*/


    int main() {
    int a, b, c, maior, menor;


    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);

    maior = a;
    if(b > maior) maior = b;
    if(c > maior) maior = c;

    menor = a;
    if(b < menor) menor = b;
    if(c < menor) menor = c;


    printf("Maior número: %d\n", maior);
    printf("Menor número: %d\n", menor);

return 0;
}











    /* 02 - Informe a quantidade de números positivos, negativos e de zeros após digitar 5 numeros */
    /* 03 - Leia e informe se ele é divisivel por 2, por 3 ou por 5*/
    /* 04 - Crie um programa que permita ao usuario escolher entre fazer a conversão cambial de real para dolar ou de Dólar para Real. Utilize commo taxa de câmbio $1 igual a R$5.30*/
    /* 05 - */


