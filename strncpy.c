#include <stdio.h>
#include <string.h>

int main()
{
   char s1[9] = "artesano";
   char s2[8] = "artista";
   int i;

   printf( "s1=%s\t", s1 );
   printf( "s2=%s\n", s2 );

   i = strncmp( s1, s2, 3 );
   printf( "Las 3 primeras letras de s1 son " );
   if( i < 0 )  printf( "menores que" );
   else if( i > 0 )  printf( "mayores que" );
   else  printf( "iguales a" );
   printf( " s2\n" );

   system("PAUSE");
   return 0;
}
