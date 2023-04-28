#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,resul;
	
	printf("Ingrese 1er numero a sumar: ");
	scanf("%d",&a);
	printf("Ingrese 2do numero a sumar: ");
	scanf("%d",&b);
	printf("Ingrese ultimo numero a sumar: ");
	scanf("%d",&c);
	resul=a+b+c;
	printf("\nResultado de %d+%d+%d = %d",a,b,c,resul);
	return 0;
}
