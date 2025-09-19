#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*
    //Exercicio 1

    int num1, num2, num3, maior, menor;


    printf("Digite 3 valores inteiro");

    printf("%d%d%d", &num1, &num2, &num3);

    if (num1 > num2){
            if(num1 > num3)
                maior = num1;
            else
                maior = num3;

    }else{
        if(num2 > num3)
          maior = num2;
        else
            maior = num3;
    }

    if(num1 < num2){
        if(num1 < num3)
        menor = num1;
        else
            menor = num3;

    }else{
        if(num2 < num3)
        menor = num2;
        else
            menor = num3;

    }
    printf("Menor: %d\tMaior: %d", menor, maior);
*/
/*
//Exercicio 2

    int num, positivos, negativos, zeros;

    possitivos = 0;
    negativos = 0;
    zeros = 0;


    printf("Digite um valor: ");
    scanf("%d", &num);
    if(num > 0)
        positivos++;
    else
      zeros++;
      printf("Digite um valor: ");
    scanf("%d", &num);
    if(num > 0)
        positivos++;
    else
      zeros++;
        printf("Digite um valor: ");
    scanf("%d", &num);
    if(num > 0)
        positivos++;
    else
      zeros++;
        printf("Digite um valor: ");
    scanf("%d", &num);
    if(num > 0)
        positivos++;
    else
      zeros++;
        printf("Digite um valor: ");
    scanf("%d", &num);
    if(num > 0)
        positivos++;
    else
      zeros++;

      printf("Positivos: %d\tNegativos: %d\tZeros: %d", positivos, negativos, zeros);

    */
    /*

//Exercicio 3

    int num, positivos, negativos, zeros;

    possitivos = 0;
    negativos = 0;
    zeros = 0;

    printf("Digite um valor: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("Divisivel por 2", num);
    else
        printf("Não Divisivel por 2", num);
    if(num % 3 == 0)
        printf("Divisivel por 3", num);
    else
        printf("Não é divisivel por 3", num);
    if(num % 5 == 0)
        printf("Divisivel por 5", num);
    else
        printf("Não divisivel por 5", num);
    */
    /*
    //Exercicio 4

    float valor;
    int escolha;

    setlocale(LC_ALL, "Portuguese");

    printf("Digite um valor: ");
    scanf("%f", &valor);
    printf(" 1 = Real para dolar\n2 = Dolar para real\n");
    scanf("%d", &escolha);
    switch(escolha){
    case 1:
        printf("$%2.f",valor/5.3);
        break;
    case 2:
        printf("R$%2.f", valor * 5.3);
        break;
    default:
        printf("Código invalido");
        break;


    }

*/
//Exercio 5



    /**/




//Exercicio 6

    int mes;
    printf("Informe o numero de um mês");
    scanf("%d", &mes);
    switch(mes){
case 1:
    printf("Janeiro\n");
    break;
default:
    printf("Mês invalido\n");



    }




































    return 0;
}
