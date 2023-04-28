#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, sum, res, div, mul, aux;
	
	printf("Ingrese la variable A: ");
	scanf("%d",&a);
	printf("Ingrese la variable B: ");
	scanf("%d",&b);
	
	sum= a+b;
	res= a-b;
	div= a/b;
	mul= a*b;
	
	printf("\nIntercambiando valiables...");
	aux= b;
	b=a;
	a=aux;
	
	printf("\nSuma de a+b: %d",sum);
	printf("\nResta de a-b: %d",res);
	printf("\nProducto de a*b: %d",mul);
	printf("\nDivision de a/b: %d",div);
	
	printf("\nValor intercambiado de a: %d",a);
	printf("\nValor intercambiado de b: %d",b);
	return 0;
}
