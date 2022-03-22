#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	//DECLARANDO AS VARIAVEIS
	float a,b,c,d,m;
	printf("Digite os numeros\n");
	scanf("%f%f%f%f",&a,&b,&c,&d);
	m = (a+b+c+d)/4;
	printf("media = %f\n",m);
	system ("pause");
	return 0;
	
}
