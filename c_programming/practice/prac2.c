#include <stdio.h>


void print_with_ptr(int *arr, int n) {
    int i = 0;
    while (i < n) {
        printf("Array index %d is:  %d\n", i, *(arr+i));
        i++;

    }
    
}


int main() {
    int a[] = {10,20,30,40, 50};
    print_with_ptr(a, 5);
    return 0;
}