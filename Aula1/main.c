#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

/*
    printf("%d � um numero e %d tamb�m", 10, 20);
    printf("Isso � uma opera��o matematica: %d\n", 20 + 10);
    printf("Isso � uma opera��o matematica: %d\n", 20 - 10);
    printf("Isso � uma opera��o matematica: %d\n", 20 * 10);
    printf("Isso � uma opera��o matematica: %d\n", 20 / 10);
*/

//N� inteiros
    int num1, num2;

    num1 = 10;
    num2 = 5;

    //printf("%d %d", num1,  num2);

    //N� reais

    float peso = 75,3;

    printf("%.2f", peso);

    return 0;
}
