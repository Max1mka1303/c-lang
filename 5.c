#include <stdio.h>
    int main(void) {
        int a = 13;
        printf("[");
        printf("%d", a);
        printf(", ");
        printf("%d", a*2);
        printf(", ");
        printf("%d", a*a);
        printf("]");
        return 0;
    }