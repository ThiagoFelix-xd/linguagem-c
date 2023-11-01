#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main() {
	int continuar;
	float v1, v2, resultado;
	int operacao;

	continuar = 1;
	
	while (continuar == 1){
	printf("selecione a operacao desejada: \n");
	printf("1.soma \n");
	printf("2.subtracao \n");
	printf("3. multiplicacao \n");
	printf("4. divisao \n");
	printf("0. sair \n");
	scanf("%d", &operacao);

	switch (operacao){
		case 1 :
			resultado = soma (v1, v2);
			printf("resultado: %.2f \n", resultado);
		break;

		case 2 :
			resultado = subtracao (v1, v2);
			printf("resultado: %.2f \n", resultado);
		break;

		case 3 :
			resultado = multiplicacao (v1, v2);
			printf("resultado: %.2f \n", resultado);
		break;
              
                case 4 :
		       resultado = divisao (v1,v2);
	               printf("resultado: %.2f \n", resultado);
	        break;

		case 0 :
		       continuar = 0;
	        break;


	  }

	}
	return 0;
}
