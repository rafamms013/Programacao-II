#include <stdio.h>
#include <stdlib.h>

int main()
{
    //10 > 15 ?printf("Verdadeiro") : printf("Falso");
    /*
    if(! 10<15){
        printf("Verdadeiro\n\n");
    }
    else{
        printf("Falso\n\n");
    }
    */

/*
int a,b,c,d;

a = 10;
b = 2;
c=3;
d=4;

if(a<b&&c<d){
    printf("Verdadeiro");
}
else{
    printf("Falso\n\n");
}
*/
//Estrutura de decisão else if encadeados
int codigo = 1;
if(codigo == 1)
    printf("Codigo 1\n");
else if(codigo == 2)
    printf("Codigo 2\n");

else if(codigo == 3)
    printf("Codigo 3\n");

else if(codigo == 4)
    printf("Codigo 2\n");
    else
        printf("Codigo não cadastrado");





















    return 0;
}
