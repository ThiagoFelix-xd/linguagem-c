#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (void){setlocale(LC_ALL, "portuguese");
	char operacao;
	float num1, num2, resultado;
		int continuar =1;

	while (continuar) {
		printf("\n Selecione uma operacao:\n");
		printf("1 - Soma");
		printf("2 - Subtracao\n");
		printf("3 - Mutplicacao\n");
		printf("4 - Divisao\n");
		printf("0 - Sair\n");
		scanf("%c", &operacao);

		switch (operacao){
			case '1' :
				printf("digite o primeiro numero: ");
				scanf("%f", &num1);
				printf("digite um segundo numero: ");
                                scanf("%f", &num2);
				resultado = num1 + num2;
				printf("Resultado: %f \n", resultado);
				break;
			case '2':
				printf("digite o primeiro numero :");
				scanf("%f", &num1);
				printf("digite o segundo nunmero: ");
				scanf("%f", &num2);
				resultado = num1 - num2;
				printf("Resultado:%F \n",resultado);
				break;
			case '3':
				printf("digite o primeiro numero: ");
				scanf("%f", &num1);
				printf("digite o segundo numero: ");
				scanf("%f", &num2);
				resultado = num1 * num2;
				printf("Resultado:%f \n",resultado);
				break;
			case '4':
				printf("digite o primerio numero: ");
				scanf ("%f", &num1);
				printf("digite o segundo numero: ");
				scanf("%f", &num2);
				if (num2 != 0) {
				resultado = num1 / num2;
				printf("resultado: %f \n", resultado);
				}else{
					printf("erro: Divisao por zero!\n");
				}
				break;
			case'0':
				continuar=0;
				printf("encerradno o programa.\n");
				break;

		}
	}
	return 0;
}



