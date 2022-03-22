#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//VARIAVEIS
	float A, B, C, D, X1, X2;
	//VARIAVEL A 
	printf ("Digite o A: ");
	scanf ("%f", &A);
	//VARIAVEL B
	printf ("Digite o B: ");
	scanf ("%f", &B);
	//VARIAVEL C
	printf ("Digite o C: ");
	scanf ("%f", &C);
	//FORMULA DELTA
	D = pow(B,2)-4*A*C;
	printf ("\nDelta: %0.1f", D);
	//FORMULA BHASKARA
	X1 = (-B-sqrt(D))/2*A;
	X2 = (-B+sqrt(D))/2*A;
	//RESULTADO
	printf ("\nX1 igual a: %0.1f", X1);
	printf ("\nX2 igual a: %0.1f", X2);

	return 0;
}
