#include <stdio.h>  /* printf */
#include <stdlib.h> /* malloc, free */

int main(int argc, char *argv[]) {
    int n = 5;
    int *arr;

    arr = (int *) malloc(n* sizeof(int));
    int *array_d = (int *) malloc(100 * sizeof(int));
    int array_s[100];

    for (int i=0;i<100;i++) {
        array_s[i] = i;
    }

    for (int i=0;i<100;i++) {
        array_d[i] = array_s[99-i];
    }

    for (int i=0; i<10;i++) {
        printf("First Array: Index [%d] Number [%d] \n", i, array_d[i]);
        printf("Second Array: Index [%d] Number [%d] \n", i, array_s[i]);
    }

    return EXIT_SUCCESS;
}
