#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

/*
    printf("%d é um numero e %d também", 10, 20);
    printf("Isso é uma operação matematica: %d\n", 20 + 10);
    printf("Isso é uma operação matematica: %d\n", 20 - 10);
    printf("Isso é uma operação matematica: %d\n", 20 * 10);
    printf("Isso é uma operação matematica: %d\n", 20 / 10);
*/

//Nº inteiros
    int num1, num2;

    num1 = 10;
    num2 = 5;

    //printf("%d %d", num1,  num2);

    //Nº reais

    float peso = 75,3;

    printf("%.2f", peso);

    return 0;
}
