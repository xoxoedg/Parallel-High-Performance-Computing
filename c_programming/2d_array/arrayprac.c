#include <stdio.h>

int pointerMagic() {
    int a = 10;
    int *p = &a;
    int **pp = &p;


    printf("*p: %d\n", *p);
    printf("Adresse von p: %p\n", (void*)&p);
    printf("Adresse von a: %p\n", p);
}

int createArr1() {
    int a[2][3] = {
        {1,2},
        {2,3,4}
    };

    for(int i=0; i<2;i++) {
        for(int j=0; j<3;j++) {
            printf("i: [%d]......j: [%d]\n", i, a[i][j]);
        }
    }


    return 0;
}

int main() {
   createArr1();
}   