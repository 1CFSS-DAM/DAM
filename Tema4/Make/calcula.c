#include "stdio.h"
#include "calc.h"

int main() {
	int a=10;
	int b=5;

	printf("La suma de %d y %d es %d\n", a, b, suma(a,b) );
	printf("La resta de %d y %d es %d\n", a, b, resta(a,b) );
	printf("El producto de %d y %d es %d\n", a, b, multiplica(a,b) );
	printf("La división entre %d y %d es %d\n", a, b, divide(a,b) );
	printf("El mayor entre %d y %d es %d\n", a, b, mayor(a,b) );
}