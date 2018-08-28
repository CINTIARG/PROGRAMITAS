#include <stdio.h>
#include <stdlib.h>
int main()
{
	int p,ed;
	printf("\ntu papa parece de buenas, le pediras permiso para salir?\n 0=si 1=no \n"); scanf("%d", &p);
	if(p==0)
	{
		printf("\ncuantos años tienes?\n \n");scanf("%d", &ed);
		if(ed>=18)
		{
			printf("\npapa: vete y no vuelvas\n");
		}
		if(ed<18)
		{
			printf("\npapa: mientras seas problema mio no vas a andar en la calle como un vago\n");
		}
	}
	
	system("Pause");
	
	return 0;
}
