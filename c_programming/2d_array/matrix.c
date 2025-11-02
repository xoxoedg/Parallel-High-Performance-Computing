#include <stdio.h>

void print_matrix_arr(int rows, int cols, int matrix[][cols])
{
    /* TODO */
}

void print_matrix_ptr(int rows, int cols, int *matrix)
{
    /* TODO */
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
    print_matrix_arr(/* TODO */);

    printf("print_matrix_ptr:\n");
    print_matrix_ptr(/* TODO */);
}
