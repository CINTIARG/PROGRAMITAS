#include <stdio.h>
#include <stdlib.h>
int main()
{
	int ed;
	printf("\ncuantos años tienes?\n"); scanf("%d", &ed);
	if(ed>=0)
	{
	
		if(ed==0)
		{
			printf("estas en la etapa de tu vida de... WTF? no deberias estar usando una computadora\n");
		}
		if(ed>0&&ed<12)
		{
			printf("aun eres un infante\n");
		}
		if(ed>=12&&ed<18)
		{
			printf("eres un adolecente, aceptalo\n");
		}
		if(ed>=18&&ed<50)
		{
			printf("eres un adulto\n");
		}
		if(ed>=50&&ed<100)
		{
			printf("ya estas viejo\n");
		}
		if(ed>=100)
		{
			printf("ya estas robando oxigeno, abraza la luz\n");
		}
	}
	
	system("Pause");
	
	return 0;
}
