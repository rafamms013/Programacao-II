#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Execicio 3

    int gorjeta;
    int numPessoas;
    float valorConta;


    printf("Digite o valor da conta, a gorjeta e a quantidade de pessoas: \n");
    scanf("%f%d%d", &valorConta, &gorjeta, &numPessoas);

    valorConta = valorConta + (valorConta * gorjeta/100);
    printf("Valor da conta: R$%.2f\tValor por Pessoa R$%.2f\n", valorConta, valorConta/numPessoas);
*/

/*-----------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Exercicio 4

    int qtdDias;
    float ValorRecebido;

    printf("Informe a quantidade de dias trabalhados: ");
    scanf("%d", &qtdDias);
    ValorRecebido = 45 * qtdDias;
    ValorRecebido = ValorRecebido - (ValorRecebido * 0.08);
    printf("Valor a ser pago R$%.2f\n", ValorRecebido);


*/
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Exercicio 5

    float reais;
    float dolares;


    printf("Informe o valor em reais a ser convertido em dolar: R$ ");
    scanf("%f", &reais);
    dolares = reais/5.3;
    printf("R$%.2f corresponde a $%.2f\n", reais, dolares);

*/
    /* --------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //Exercicio 6

    int segundos, h, m, s, resto;

    printf("Informe uma quantidade de segundos:  ");
    scanf("%d", &segundos);

    h = segundos / 3600;  //parte inteira da divisão, mas vai sobrar um resto
    resto = segundos % 3600; // o resto será obtido aqui
    m = resto / 60; // 1 = 60 segundos. Quantos minutos representam o resto?
    s = resto % 60; //obtemos os segundos com o resto dos minutos

    printf("\t%d:%d:%d\n", h, m, s);

    */
/*----------------------------------------------------------------------------------------------------------------------------------------------------------------------

    //Exercicio 7

    printf("\n");
    printf("\t    *\n"); // 4 espaço
    printf("\t   ***\n"); // 3 espaço
    printf("\t  *****\n"); // 2 espaço
    printf("\t *******\n"); // 1 espaço
    printf("\t*********\n");


*/


// Exercicio 8

 int valor1, valor2;
 printf("Digite dois valores inteiros: ");
 scanf("%d%d", &valor1, &valor2);

 valor1 = valor1 + valor2;
 valor2 = valor1 - valor2;
 valor1 =
 valor1 - valor2;
 printf("\nValor 1: %d\tValor 2: %d\n", valor1, valor2);














    return 0;
}
