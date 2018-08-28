#include <stdio.h>
 int main (){
     int he, me, se;
     printf("Ingresa la hora, minuto, segundo de entrada\n");
    scanf("%d", &he);
    scanf("%d", &me);
    scanf("%d", &se);
    
    system("PAUSE");
    
    int hs, ms, ss;
    printf("\nIngresa la hora, minuto, segundo de salida\n");
    scanf("%d", &hs);
    scanf("%d", &ms);
    scanf("%d", &ss);
    
    if(se>ss) {
              ms=ms-1;
              ss=ss+60;
              }
              int sr= ss-se;
              if(me>ms){
              hs=hs-1;
              ms=ms+60;
              }
              int mr=ms-me;
              int hr=hs-he;
    printf("\nEl tiempo trabajado fue %d,%d,%d \n",hr,mr,sr);
              
    system("PAUSE");
    return 0;
}
              
              
              
              
              
              
              
              
              
