#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i, j, linhas = 3, colunas = 3;
    int ** matriz = (int**) malloc(linhas* sizeof(int*));
    for(i=0; i<linhas; i++){
    	matriz[i] = (int*) malloc(colunas* sizeof(int*));
	}
    
    for(i=0; i<linhas; i++){
    	for(j=0; j<colunas; j++){
        	matriz[i][j] = i*3 + j;
        	printf("%d \t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
    
