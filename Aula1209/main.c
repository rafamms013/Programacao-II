#include <stdio.h>
#include <stdlib.h>

int main()
{
int mat3[2][4]={{1,2,3,4},{5,6,7,8}};

for(int l=0;l<2;l++){
	for(int c=0; c<4; c++){
		print("%d",mat3[l][c]);
		}
		printf("\n");
	}
    return 0;
}
