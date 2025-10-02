#include <stdio.h>

int main () {

    int x, y;

    scanf("%d", &x);
    scanf("%d", &y);

    if ( x > y ) {
        printf("\n%d eh maior\n", x);
    } else {
        printf("\n%d eh maior\n", y);
    }

    return 0;
    
}