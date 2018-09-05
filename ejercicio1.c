#include <stdio.h>

int main()
{
	int orden;

printf("Ingrese el orde las matrices A y B\n");
scanf("%d",&orden);

	int matrizA[orden][orden],matrizB[orden][orden],resultado[orden][orden];

printf("Ingrese los datos de la matriz A\n");

for (int i = 0; i < orden; i++)
{
	for (int  j= 0; j < orden; j++)
	{
		printf("Posicion [%d][%d]\t",i,j );
		scanf("%d",&matrizA[i][j]);
	}
}

printf("Ingrese los datos de la matriz B\n");

for (int i = 0; i < orden; i++)
{
	for (int j = 0; j < orden; j++)
	{
		printf("Posicion [%d][%d]\t",i,j );
		scanf("%d",&matrizB[i][j]);
	}
}

printf("+++++++++++++++++++++++++++++++++++\n");

printf("Producto AxB\n");

for (int i = 0; i < orden; i++)
	 {
	 	for (int j = 0; j < orden; j++)
	 	{
	 		for (int k = 0; k < orden; k++)
	 		{
	 			resultado[i][k]+=(matrizA[i][j]*matrizB[j][k]);
	 		}
	 	}
	 }


printf("==========Producto de la matriz================\n");

for (int i = 0; i < orden; i++)
{
	printf("\n");
	for (int j = 0; j < orden; j++)
	{
		printf("%d\t",resultado[i][j] );
	}
}


int cont,numPrimos;



	for (int i = 0; i < orden; i++)
{
	for (int j = 0; j < orden; j++)
	{

		for (int k = 1; k <= resultado[i][j]; k++)
		{
			if (resultado[i][j]%k==0)
			{
				cont++;
			}

		}


		if (cont==2)
		{
			printf("Es primo: %d, en la Posicion: [%d][%d] \n",resultado[i][j],i,j );
			numPrimos++;
		}
cont=0;

	}
	
}









}