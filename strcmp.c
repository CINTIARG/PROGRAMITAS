#include <stdio.h>
#include <string.h>
 int main (){
     char escuela[30]="la salle oaxaca", ESCUELA [30]="LA SALLE OAXACA";
     int i;

   printf( "escuela=%s\t", escuela);
   printf( "ESCUELA=%s\n", ESCUELA);

   i = strcmp( escuela, ESCUELA);
   printf( "Mi escuela " );
   if( i < 0 )  printf( "no es\t" );
   else if( i > 0 )  printf( "si es\t" );
   else  printf( "es igual a\t" );
   printf( "ESCUELA\n" );
     
     system("PAUSE");
     return 0;
     }
