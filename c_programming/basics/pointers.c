#include <stdio.h> 

int ex3() {
    int arr[3] = {1,2,3};
    int *p = arr;
    int *t = p+1;
    int *u = t+1;

    printf("Memory addresses:\n");
    printf("  first element : %p\n", p);
    printf("  second element: %p\n", t);
    printf("  third element : %p\n", u);
}

int separate() {
    printf("*********************************************");
}

int sizes() {
    printf("\nSize of int: %zu\n",sizeof(int));
    printf("Size of char: %zu\n",sizeof(char));
    printf("Size of short: %zu\n",sizeof(short));
    printf("Size of float: %zu\n",sizeof(float));
    printf("Size of doubl: %zu\n",sizeof(double));
    printf("Size of void pointer: %zu",sizeof(void*));
}


int test() {
    int x = 42;
    int *p = &x;
    int y = *p;
    *p = 7;

    printf("%d %d\n", x, y);
}

int ex2() {
    int x = 10;
    int *p = &x;

    *p = 99 ;
    
    printf("x = %d\n", x);
    printf("*p = %d\n", *p);
    printf("Adresse von x: %p\n", &x);
    printf("Adresse in p : %p\n", p);
}


int ex1() {
    int a = 5;
    int *p = &a;
    printf("%p\n", p);
}


int main() {
    ex3();
    separate();
    sizes();
    

    return 0;
}


