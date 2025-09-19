#include <stdio.h>
#include <stdlib.h>


int main()
{

    //Lista Exercicios 3


    /*
    //Exercício 1: Leia um número e imprima na tela sua tabuada.

    int numero, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabuada de %d:\n", numero);
    for(i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", numero, i, numero * i);
    }

    return 0;
}
*/
/*
// Escreva um programa que repita a leitura de uma senha até que ela seja válida. Para cada leitura de senha incorreta informada, escrever a mensagem "Senha Invalida". Quando a senha for informada corretamente deve ser impressa a mensagem "Acesso Permitido" e o programa deve ser encerrado. Considere que a senha correta é o valor 123456.

    int senha;

    while(1){
        printf("Digite a senha:  ");
        scanf("%d", &senha);


        if(senha == 123456){
            printf("Acesso Permitido\n");
            break;
        }else{
            printf("Senha invalida\n");

        }
    }

return 0;

}
*/
/*
// Exercício 3: Faça um programa que some os números ímpares de 1 a 1000 e imprima a resposta.

    int soma = 0, i;

    for(i = 1; i <= 1000; i += 2){
        soma += i;
    }

    printf("Soma dos impares de 1 a 1000: %d\n", soma);

    return 0;
    }
*/
/*

// Exercício 4: Faça um programa que leia duas notas de um aluno, calcule e imprima a média. Faça com que o programa só aceite notas válidas (0 a 10). Enquanto uma nota válida não for informada, o programa deve continuar pedindo a nota.

    float nota1;
    float nota2;

    do{
        printf("Digite a primeira nota (0 a 10):  ");
        scanf("%f", &nota1);
    }while (nota1 < 0 || nota1 > 10);

    do{
        printf("Digite a segunda nota (0 a 10): ");
        scanf("%f", &nota2);

    }while(nota2 < 0 || nota2 > 10);

    float media = (nota1 + nota2) / 2;
    printf("A Média é:  %.2f\n", media);

    return 0;

    }

*/

/*
//Exercício 5: Faça um programa que imprima na tela todos os múltiplos de 7 entre 1 e 9999.

    int i;

    printf("Multiplos de 7 entre 1 e 9999:\n");
    for(i = 7; i <= 9999; i += 7){
    printf("%d\n", i);

}

return 0;
}
*/

//



