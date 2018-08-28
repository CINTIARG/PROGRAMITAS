#include <stdio.h>
#include <string.h>

int main()
{
   char p1[20] = "impresora";
   char p2[20] = "Impresor";
   int a;

   printf( "p1=%s\t", p1 );
   printf( "p2=%s\n", p2 );

   a = strncmp( p1, p2, 3 );
   printf( "Las 3 primeras letras de p1 son " );
   if( a < 0 )  printf( "menores que" );
   else if( a > 0 )  printf( "mayores que" );
   else  printf( "iguales a" ); printf( " p2\n" );
   system ("PAUSE");
   return 0;
}
