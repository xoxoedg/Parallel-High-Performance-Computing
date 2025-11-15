#include <stddef.h>
#include <stdio.h>
#include <string.h>
// Größe char 1 Byte
// Strings in c enden mit dem Null-Byte \0

int copyString(char *source, char *target) {
    strcpy(target, source);
    return 0;

}




int main() {
    const char name[] = "Hallo wie geht es dir denn heute?";
    printf("Länge des String %zu", strlen(name)); 
    size_t arrlen = strlen(name);

   char ziel[arrlen+1];
   copyString(name, ziel);

    return 0;

}
