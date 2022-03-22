#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//VARIAVEIS
float C, K, F;
printf ("Calculadora Celsius para Fahrenheit e Kevin\n");
//CELSIUS
printf ("\nDigite a temperatura em Celsius: ");
scanf ("%f", &C);
//CELSIUS PARA FAH
F = C*1.8+32;
//PRINT
printf ("\nFahrenheit: %0.1f", F);
//CELSIUS PARA KELVIN
K = C+273.15;
//PRINT
printf ("\nKelvin: %0.2f\n", K);
system("\npause");
	return 0;
}
