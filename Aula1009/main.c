#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int valores[30];

    srand(time(NULL));

    for(int i = 0; i < 30; i++){
        valores[i] = (rand() % 100);

    }

    for(int i = 0; i < 30; i++)
        printf("%d = %d\n", i, valores[i]);


    return 0;
}
