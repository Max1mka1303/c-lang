#include <stdio.h>
    int main(void) {
        const int year = 365;
        const int day = 24;
        const int hour = 3600;
        int a = 13;
        printf("Seconds %d|Hours %d|Days %d|Years: %d", a*year*day*hour, a*year*day, a*year, a);
    }