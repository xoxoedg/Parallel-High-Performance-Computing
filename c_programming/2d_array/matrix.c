#include <stdio.h>

void print_matrix_arr(int rows, int cols, int matrix[][cols]) {
    
   for (int i=0; i<rows;i++) {
        for (int j=0; j<cols;j++){
            printf("%d\n",matrix[i][j]);
        };
    }; 
}

void print_matrix_ptr(int rows, int cols, int *matrix)
{
   for (int i=0; i<rows;i++) {
        for (int j=0; j<cols;j++){
            printf("%d\n",*(matrix + i*cols + j));
        };
    }; 
}

int main(void)
{
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // expected output:
    // 1 2 3
    // 4 5 6

    printf("print_matrix_arr:\n");
    print_matrix_arr(2, 3, matrix);
    
    printf("print_matrix_ptr:\n");
    print_matrix_ptr(2,3, &matrix[0][0]);
    return 0;
}
