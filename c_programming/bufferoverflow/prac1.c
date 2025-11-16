#include <stdio.h>
#include <string.h>
#include <unistd.h>

char *gets(char *s);
void secret_function() {
    printf("\n!!! HEIMLICHE FUNKTION AUSGEFÜHRT !!!\n");
    printf("Der Buffer Overflow war erfolgreich!\n");
    // Hier könnte bösartiger Code stehen
    _exit(0); // Beendet das Programm sicher
}

// Eine harmlose Funktion zum Start
void vulnerable_function() {
    char buffer[16]; // Unser anfälliger Puffer: 16 Bytes
    
    printf("Gib etwas ein (maximal 15 Zeichen, + Null-Terminator): ");
    
    // Die unsichere Funktion: Liest Input OHNE Längenprüfung
    // HIER PASSIERT DER BUFFER OVERFLOW!
    gets(buffer); 
    
    printf("Du hast eingegeben: %s\n", buffer);
    printf("Funktion beendet. Normalerweise kehre ich zu main() zurück.\n");
}

int main() {
    printf("Programm gestartet.\n");
    
    unsigned long secret_func_address = (unsigned long)secret_function;
    printf("Adresse von secret_function(): 0x%lx\n", secret_func_address);
    printf("---------------------------------------\n");

    vulnerable_function();
    
    printf("---------------------------------------\n");
    printf("Programm beendet (wenn der Exploit nicht erfolgreich war).\n");
    return 0;

