#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//7- INGRESAR UN IMPORTE EN PESOS Y MOSTRAR EL 80%, 20% Y 15 % DE DICHO VALOR

int main(int argc, char *argv[]) {
	float precio,precio80,precio20,precio15;
	
	printf("INGRESAR UN VALOR EN PESOS:$ ");
	scanf("%f",&precio);
	
	precio80=precio*0.8;
	precio20=precio*0.2;
	precio15=precio*0.15;
	
	printf("\nVALOR EN PESO INGRESADO:$ %0.2f \n",precio);
	printf("80% DEL VALOR INGRESADO:$ %0.2f \n",precio80);
	printf("20% DEL VALOR INGRESADO:$ %0.2f \n",precio20);
	printf("15% DEL VALOR INGRESADO:$ %0.2f \n",precio15);
	
    return 0;
}
