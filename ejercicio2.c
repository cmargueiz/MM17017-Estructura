#include <stdio.h>

int main()
{

	int tam,temp,cont=0,aux;
	printf("Ingrese el tamano del vectot\n");
scanf("%d",&tam);
	int vector[tam];

printf("Ingrese los datos para el vector\n");

for (int i = 0; i < tam; i++)
{
	

	do
	{
		cont=0;
		printf("Dato de la posicion: %d\n",i );
	
	scanf("%d",&temp);
		
	for (int j = 0; j < i; j++)
	{
		if (vector[j]==temp)
		{
			cont++;
		}
	}
	
	if (cont>0)
	{
		printf("Es repetido\n");
	}
	} while (cont>0);


	

	vector[i]=temp;

}


printf("Datos del vector sin repeticiones\n");


	for (int i = 0; i < tam; i++)
	{
		printf("%d\n",vector[i] );
	}

	printf("Datos ordenados descendentemente\n");


	for (int i = 0; i < tam; i++)
	{
		for (int j = 0; j < tam-1; j++)
		{
			if (vector[j]>vector[j+1])

			{
				aux=vector[j];
			vector[j]=vector[j+1];
			vector[j+1]=aux;

			}
		}
	}

	for (int i = tam; i > 0; i--)
	{
		printf("%d\n",vector[i] );
	}

return 0;
}

