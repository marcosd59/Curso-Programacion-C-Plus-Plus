/*2. Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que 
muestre la diagonal principal de la matriz.*/

#include <stdio.h>

int main()
{
	int numeros[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	
	printf("Mostrando Matriz completa\n");
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			printf("%d ",numeros[i][j]);
		}
		
		printf("\n");
	
	}

	printf("\n\nMostrando diagonal principal de la matriz\n");
	
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(i == j)
			{
				printf("%d ",numeros[i][j]);
			}
		}
	}
	

	return 0;
}
