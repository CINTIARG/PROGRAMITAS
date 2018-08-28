#include <stdio.h>
#include <string.h>

int main(){
    char informacion[60]="Cintia Rocha Gonzalez, 01/08/2018, Guanajuato", apellido[20]="Rocha";
    
    char b[]= strstr(informacion, apellido);
    if (b < 0) printf("No");
    else if(b > 0) printf("tal vez");
    else print("%s",informacion);
    system("PAUSE");
    return 0;
}
