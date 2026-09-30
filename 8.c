#include <stdio.h>
    void pulse(){
        printf("@");
    }
    int main(void){
        pulse();
        printf("\n");
        pulse(), pulse();
        printf("\n");
        pulse(), pulse(), pulse();
        return 0;
    }
