#include <stdio.h>
#include <stdlib.h>
int main()
{
	int mes;
	printf("\ningresa numero para obtener el mes que corresponde y su numero de dias \n"); scanf("%d", &mes);
	switch(mes)
	{
	
		case 1: printf("\nEnero tiene 31\n");break;
		case 2: printf("\nFebrero tiene 28\n");break;
		case 3: printf("\nMarzo tiene 31\n");break;
		case 4: printf("\nAbril tiene 30\n");break;
		case 5: printf("\nMayo tiene 31\n");break;
		case 6: printf("\nJunio tiene 30\n");break;
		case 7: printf("\nJulio tiene 31\n");break;
		case 8: printf("\nAgosto tiene 31\n");break;
		case 9: printf("\nSeptiembre tiene 30\n");break;
		case 10: printf("\nOctubre tiene 31\n");break;
		case 11: printf("\nNoviembre tiene 30\n");break;
		case 12: printf("\nDiciembre tiene 31\n");break;
		default: printf("\nNumero no admitido\n");
	}
	system("Pause");
	return 0;
}
