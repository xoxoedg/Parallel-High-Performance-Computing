#include <stdlib.h>
#include <stdio.h>

void set(int *p) {
    *p = 42;
}

void double_value(int *p) {
    *p *= 2;
}


void swap(int *p, int *y) {
    int temp = *p;
    *p = *y;
    *y = temp;
}

int main() {
    int x = 10;
    int y = 5;
    int u = 2;
    int h = 4; 

    set(&x);
    printf("X is %d\n", x);

    double_value(&y);

    swap(&u, &h);

    printf("Variable u is: %d\n", u);
    printf("Variable h is: %d\n", h);


    return 0;
}