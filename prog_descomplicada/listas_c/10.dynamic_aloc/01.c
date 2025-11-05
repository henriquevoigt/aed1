#include <stdio.h>
#include <stdlib.h>

int main () {

    int *vetor = NULL, tamanho = 5;

    vetor = (int *)malloc(tamanho * sizeof(int));

    if ( vetor == NULL ) {
        printf("Falha ao alocar memoria!\n");
        return 1;
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("Informe o valor %d: ", i);
        scanf("%d", &vetor[i]);
    }

    for ( int i = 0; i < tamanho; i++ ) {
        printf("%d ", vetor[i]);
    }

        free(vetor);

    return 0;
}