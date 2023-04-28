#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7- INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR

int main(int argc, char *argv[]) {
	float precio,dolar=15.4,preciodolar;
	
	printf("INGRESAR UN VALOR EN PESOS:$ ");
	scanf("%f",&precio);
	
	preciodolar= dolar*precio;
	
	printf("\nVALOR EN PESO INGRESADO:$ %0.2f \n",precio);
	printf("VALOR EN DOLARES:$ %0.2f \n",preciodolar);
		
    return 0;
}
