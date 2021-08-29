/*
 ============================================================================
 Name        : ejercicio-1-2.c
 Author      : Juan Manuel
 Version     : 1.0.0
 Copyright   : no Copyright
 Description : pide 5 numeros, muestra el minimo y el maximo, indica en el orden que se ingresaron
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);
	int cantidadVueltas=0;
	int numeroIngresado;
	int numeroMinimo=0;
	int numeroMaximo=0;
	int banderaPrimerNumero=0;
	int primeroNumero;
	int segundoNumero;
	int tercerNumero;
	int cuartoNumero;
	int quintoNumero;

	while(cantidadVueltas<5)
	{
		printf("Por favor ingrese un numero: ");
		fflush(stdin);
		scanf("%d", &numeroIngresado);

		if(banderaPrimerNumero==0)
		{
			banderaPrimerNumero=1;
			numeroMinimo=numeroIngresado;
			numeroMaximo=numeroIngresado;
			primeroNumero=numeroIngresado;
		}
		else
		{
			if(numeroIngresado<numeroMinimo)
			{
				numeroMinimo=numeroIngresado;
			}
			else
			{
				if(numeroIngresado>numeroMaximo)
				{
					numeroMaximo=numeroIngresado;
				}
			}
			if(banderaPrimerNumero==1)
			{
				segundoNumero=numeroIngresado;
				banderaPrimerNumero=banderaPrimerNumero+1;
			}
			else
			{
				if(banderaPrimerNumero==2)
					{
						tercerNumero=numeroIngresado;
						banderaPrimerNumero=banderaPrimerNumero+1;
					}
				else
					{
						if(banderaPrimerNumero==3)
							{
								cuartoNumero=numeroIngresado;
								banderaPrimerNumero=banderaPrimerNumero+1;
							}
						else
						{
							if(banderaPrimerNumero==4)
								{
									quintoNumero=numeroIngresado;
									banderaPrimerNumero=banderaPrimerNumero+1;
								}
						}
					}
			}
		}


		// aumentamos la cantidad de vueltas
		cantidadVueltas=cantidadVueltas+1;
	}

	printf("El numero minimo es: %d\n", numeroMinimo);
	printf("El numero maximo es: %d\n", numeroMaximo);
	printf("El orden en el que se ingreso los numeros es: %d ; %d ; %d ; %d ; %d\n", primeroNumero,segundoNumero,tercerNumero,cuartoNumero,quintoNumero);



	return EXIT_SUCCESS;
}
