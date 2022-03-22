#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  T, B, G, M;
	printf ("Digite os Mls: ");
	scanf ("%f", &B);
	printf ("Digite o tempo em horas: ");
	scanf ("%f", &T);
	
	G = B/(T*3);
		M = B/T;
	
	printf ("\nGotas necessarias: %0.1f", round(G));
 	printf ("\nMicrogotas necessarias: %0.1f\n", round(M));
 	system ("pause");
	return 0;
}
