#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//6-INGRESAR 3 NÚMEROS E IMPRIMIR EL DOBLE, EL TRIPLE Y LA MITAD DE CADA UNO.

int main(int argc, char *argv[]) {
	float a,b,c;
	float a2,a3,a1;
	float b2,b3,b1;
	float c2,c3,c1;
	
	printf("Ingrese el valor del primer numero:");
	scanf("%f",&a);
	printf("Ingrese el valor del segundo numero:");
	scanf("%f",&b);
	printf("Ingrese el valor del tercer numero:");
	scanf("%f",&c);	
	
	a2=a*2;
	a3=a*3;
	a1=a/2;
	
	b2=b*2;
	b3=b*3;
	b1=b/2;
	
	c2=c*2;
	c3=c*3;
	c1=c/2;
	
	printf("\n EL DOBLE DE %0.2f: %0.2f",a,a2);
	printf("\n EL DOBLE DE %0.2f: %0.2f",b,b2);
	printf("\n EL DOBLE DE %0.2f: %0.2f",c,c2);
	
	printf("\n EL TRIPLE DE %0.2f: %0.2f",a,a3);
	printf("\n EL TRIPLE DE %0.2f: %0.2f",b,b3);
	printf("\n EL TRIPLE DE %0.2f: %0.2f",c,c3);
	
	printf("\n LA MITAD DE %0.2f: %0.2f",a,a1);
	printf("\n LA MITAD DE %0.2f: %0.2f",b,b1);
	printf("\n LA MITAD DE %0.2f: %0.2f",c,c1);
	
	
    return 0;
}
