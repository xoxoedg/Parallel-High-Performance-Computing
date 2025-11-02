#include <stdio.h>
#include <stdlib.h>



int dynamicArray() {
    int n = 5;
    int *arr = malloc(n * sizeof(int));

    for(int i = 0; i < n;i++) {
        arr[i] = (i+1) * 10;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\n");
}


int allocate() {
    int *p = malloc(sizeof(int)); //Reserviert im Heap 4 Bytes

    if (p==NULL) {
        printf("Speicher konnte nicht zugewiesen werden");
        return 1;
    }
    
    *p = 42;
    printf("Wert %d\n", *p);
    free(p);
}

int separate() {
    printf("*************************");
}

int main() {

}