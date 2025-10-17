#include <stdio.h>
#include <string.h>

int main () {

    char string[100];

    printf("Informe um nome completo!\n");
    scanf("%[^\n]s", string);

    printf("%s", string);

    return 0;

}