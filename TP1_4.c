#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,resul;
	
	printf("Ingrese un numero base: ");
	scanf("%d",&a);
	printf("Ingrese un numero exponente: ");
	scanf("%d",&b);
	
	resul= pow(a,b);
	
	printf("RESULTADO a^b: %d",resul);
	
	return 0;
}
