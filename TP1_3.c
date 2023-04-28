#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,resul;
	
	printf("Ingrese el valor de A: ");
	scanf("%d",&a);
	printf("Ingrese el valor de B: ");
	scanf("%d",&b);
	
	resul=((a+b)*(a-b));
	
	printf("Resultado de ((a+b)*(a-b)): %d",resul);
	return 0;
}
