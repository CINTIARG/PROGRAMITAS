#include <stdio.h>
#include <string.h>

int main(){
    char titulo[50]="Bienvenido a mi blog\n";
    char texto [50];
    strcpy(texto,titulo);
    printf("%s",texto);
    system("PAUSE");
    return 0;
}
