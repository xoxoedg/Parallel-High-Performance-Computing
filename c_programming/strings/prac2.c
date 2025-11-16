#include <stdio.h>
#include <stdlib.h> // für malloc
                    
int my_strlen(char arr[]) {
    int loop = 0;
    char arr_var=arr[0]; 
    while(arr_var != '\0') {
        loop++;
        arr_var = arr[loop];
    }
    return loop;
}
char *dynamic_string_copy(const char *source) {
    int length =  my_strlen(source) + 1; 
    char *new_string = malloc(length * sizeof(char));
    int counter = 0;
    char char_counter = *(source+counter) ;
    while (char_counter != '\0') {
        *(new_string+counter) = char_counter;
        counter++;

    }

    new_string[counter+1] = '\0';

    return new_string; 
}

int main() {


    return 0;
}
