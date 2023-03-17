#include <stdio.h>
#include <stdlib.h>


int main()
	{
		int x,i,arreglo[4][4];

		for (x=0;x<4;x++)
			for (i=0;i<4;i++)
				scanf("%d",&arreglo[x][i]);

		for (x=0;x<4;x++)
			for (i=0;i<4;i++)
				printf("%d",arreglo[x][i]);

    return 0;
	}
