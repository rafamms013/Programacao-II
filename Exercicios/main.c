#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    //Execercio 01 - Como ler do teclado sexo, idade, peso e altura do usuário?
    char sexo;
    int idade;
    float peso, altura;

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);

    printf("Digite a altura (m): ");
    scanf("%f", &altura);

    printf("Sexo: %c\nIdade: %d\nPeso: %.2f kg\nAltura: %.2f m\n", sexo, idade, peso, altura);
    */


    /*--------------------------------------------------------------
    //Exercicio 02 - Trocar os valores de duas variáveis.


    int a = 5;
    int b = 10, temp;


    temp = a;
    a = b;
    b = temp;

    printf("a = %d, b = %d\n", a, b);
  */

/*------------------------------------------------------------------------------------
  //Exercício 3: Trocar os valores de duas variáveis sem usar uma variável auxiliar.

  int a = 5;
  int b = 10;


  a = a + b;
  b = a - b;
  a = a - b;

  printf("a =  %d, b = %d\n", a, b);

*/

/*

//Exercício 4: Escreva um programa que leia um valor de despesa de restaurante, o valor da gorjeta (em porcentagem) e o número de pessoas para dividir a conta. Imprima o valor que cada um deve pagar. Assuma que a conta será dividida igualmente.

float despesas;
float gorjeta;
float valorTotal;
float ValorPorPessoas;
int numPessoas;


printf("Digite o valor da conta: R$");
scanf("%f", &despesas);

printf("Digite o valor da gorjeta: ");
scanf("%f", &gorjeta);

printf("Digite a quantidade de pessoas: ");
scanf("%d", &numPessoas);


valorTotal =  despesas + (despesas * gorjeta / 100);
ValorPorPessoas = valorTotal / numPessoas;


printf("O valor a ser pago por cada sera: R$ %.2f\n", ValorPorPessoas);

*/

/*----------------------------------------
Retornar para refazer

//Exercício 5: Uma empresa contrata um encanador a R$ 45,00 por dia. Faça um programa que solicite o número de dias trabalhados pelo encanador e imprima a quantia líquida que deverá ser paga, sabendo que são descontados 8% para imposto de renda.

int dias;
float salarioBruto;
float salarioLiquido;
float desconto;


printf("Informe o número de dias trabalhados: ");
scanf("%d", dias);


salarioBruto =  dias * 45.0;
desconto = salarioBruto * 0.08;
salarioLiquido =  salarioBruto - desconto;



printf("Salario bruto: R$ %.2f\n", salarioBruto);
printf("Desconto: R$ %.2f\n", desconto);
printf("Salario liquido: R$ %.2f\n", salarioLiquido);


*/

/*

//Exercicio 6 - Crie um programa em C que permita fazer a conversão cambial entre Reais e Dólares. Considere como taxa de câmbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em Dólares.



 float reais, dolares;
    const float taxaCambio = 5.30;

    printf("Digite o valor em Reais: R$ ");
    scanf("%f", &reais);

    dolares = reais / taxaCambio;

    printf("Valor em Dólares: US$ %.2f\n", dolares);

*/


/*------------------------------------------------------------------------------

//Exercício 7: Faça um programa para ler do teclado uma quantidade de segundos e imprimir na tela a conversão para horas, minutos e segundos. Exemplo: Entrada: 3672 Saída: 1:1:12

 int totalSegundos, horas, minutos, segundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &totalSegundos);

    horas = totalSegundos / 3600;
    minutos = (totalSegundos % 3600) / 60;
    segundos = totalSegundos % 60;

    printf("%d:%d:%d\n", horas, minutos, segundos);


 */

 /*--------------------------------------------------------------------------
//Exercício 8: Imprima uma pirâmide de asteriscos na tela.

 int i, j, linhas;

    printf("Digite o número de linhas da pirâmide: ");
    scanf("%d", &linhas);

    for (i = 1; i <= linhas; i++) {
        for (j = 1; j <= linhas - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }
*/

    return 0;
}

