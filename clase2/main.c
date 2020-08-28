
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int contador=0;
	float promedio=0;
	int acumulador=0;
	int numero=0;

	while(numero!=999){
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
		if(numero != 999){
			acumulador = acumulador + numero;
			contador++;
		}
	}
	if(contador>0) {
		promedio = (float) acumulador/contador;
	}
	printf("\n El promedio es: %f", promedio);
	return 0;
}
