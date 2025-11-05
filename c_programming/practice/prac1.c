#include <stdio.h>
// Call by value vs. Call by Refrence


void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

void swapPoint(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 5; int b = 9;
    swap(a,b);
    
    printf("a = %d, b = %d\n", a, b);
    
    swapPoint(&a,&b);
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
    