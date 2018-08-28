#include <stdio.h>

int main (){
    int numero, mediano;
    printf("Dame dos numeros\n");
    scanf("%d",&numero);
    scanf("%d",&mediano);
    
    if(mediano>numero) { printf("%d es el menor, %d es el mayor\n",numero, mediano);
}
    else  printf("%d es el menor, %d es el mayor\n",mediano, numero);
    

    system("PAUSE");
    return 0;
}
