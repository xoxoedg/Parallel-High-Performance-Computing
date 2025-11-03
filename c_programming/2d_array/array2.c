#include <stdio.h>

void print2D(int (*arr)[3] , int rows ) {
    int *row= arr[0];

    for (int i=0; i<3;i++) {
        printf("%d\n",row[i]);
    };  
}


int main(void) {
    int a[2][3] = { {1,2,3}, {4,5,6} };
    print2D(a, 2);
    return 0;
}