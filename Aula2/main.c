#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//AULA 02 - 08/08/2025

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num = 10;

    //printf("O numero é:  %d", num);

    //float peso = 90.00;

    //printf("O pesos é:  %2.f", peso);

//caracteres

    //getchar()
    //fgetc
    //scanf

    //char sexo;

    //printf("Digite f para feminino e m para masculino: ");

    //scanf("%c", &sexo);

   //sexo = getchar(); //retorna um inteiro

   //sexo= fgetc(stdin);
    //printf("O sexo é: %c", sexo);

/*
    int idade;
    float peso, altura;

    printf("Digite sua idade, seu peso e sua altura: ");

    scanf("%d%f%f", &idade, &peso, &altura);

    printf("Idade: %d\tPeso: %f\tAltura: %.2f", idade, peso, altura);

    */




    //ler do teclado sexo, idade, peso e altura e exibir os valores na tela

    char sexo;
    int idade;
    float peso;
    float altura;

    /*
    printf("Digite o sexo: ");
    scanf(" %c", &sexo);
    printf("Digite seu sexo, peso, altura:  ");


    printf("Digite sua idade:");
    scanf("%d", &idade);


    printf("Digite seu peso:  ");
    scanf("%f", &peso);

    printf("Digite sua altura: ");
    scanf("%f", &altura );

    printf("Sexo: %c\n", sexo);
    printf("Idade: %d anos\n", idade);
    printf("Peso: %.2f kg\n", peso);
    printf("Altura: %.2f m\n", altura);

*/

    char a, b;

    printf("Digite dois caracteres: ");

    scanf("%c", &a);

    getchar();

    scanf("%c", &b);

    printf("\ta = &c\tb = %c", a, b);



    //printf("Digite sua idade, peso, altura e sexo: ");
    //scanf("%d%f%f%c", &idade, &peso, &altura, &sexo);
    //printf("\tSexo: %c\tIdade: %d\tPeso: %f\tAltura: %.2f", sexo, idade, peso, altura);






    return 0;
}
