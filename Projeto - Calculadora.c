#include <stdio.h> // Funções de entrada e saída
#include <stdlib.h> // Função padrão
#include <math.h> // Funções matemáticas
#include <locale.h> // Habilita o uso de acentuação em palavras

// Adicionar novas bibliotecas acima de acordo com necessidade 

/*
    // Espaço destinado a transcrição do enunciado para não ficar olhando toda hora a lista

    Crie uma calculadora com as seguintes operações: adição, subtração, multiplicação, divisão, exponenciação, raíz quadrada, raíz cúbica, raíz n e fatorial
    
*/

int main() // Função obrigatória
   {
	/* Declaração de constantes ou variáveis */

    float num1, num2, fatorial, expoente, k;
    char operador, resposta;
	/* Fim */
    resposta ='s';

	/* Entrada de dados */

    setlocale(LC_ALL,"pt-BR");

    while(resposta == 's' || resposta == 'S'){

        num1 = 0;
        num2 = 0;
        expoente = 0;
        fatorial = 0;
        printf("Digite a operacao:");
        printf("\n[+] - Adicao");
        printf("\n[-] - Subtracao");
        printf("\n[x] - Multiplicacao");
        printf("\n[/] - Divisao");
        printf("\n[^] - Exponenciacao");
        printf("\n[r] - raiz n de um valor");
        printf("\n[!] - fatorial\n");
        operador = getche();

        switch (operador)
        {
        case '+':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o outro valor:");
            scanf("%f",&num2);

            printf("\n%f %c %f = %f", num1, operador, num2, num1 + num2);
            break;

        case '-':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o outro valor:");
            scanf("%f",&num2);

            printf("\n%f %c %f = %f", num1, operador, num2, num1 - num2);
            break;

        case 'x':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o outro valor:");
            scanf("%f",&num2);

            printf("\n%f %c %f = %f", num1, operador, num2, num1 * num2);
            break;

        case '/':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o outro valor:");
            scanf("%f",&num2);

            printf("\n%f %c %f = %f", num1, operador, num2, (float)num1 / num2);
            break;

        case '^':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o expoente:");
            scanf("%f",&expoente);

            printf("\n%f %c (%f) = %f", num1, operador, expoente, pow(num1,expoente));
            break;

        case 'r':

            printf("\nDigite um valor:");
            scanf("%f",&num1);
            printf("\nDigite o indicie:");
            scanf("%f",&expoente);

            printf("\nRaiz%d(%f) = %f", (int)expoente, num1, pow(num1,1.0/expoente));
            break;

        case '!':

            printf("\nDigite um valor:");
            scanf("%f",&num1);

            k = num1;

            for(fatorial = 1; num1 > 1; num1 = num1 - 1){

                fatorial = fatorial * num1;
            }

            printf("\n%d%c = %d", (int)k, operador, (int)fatorial);
            break;

        default: printf("\nOperador invalido!");
            break;
        }

        printf("\nDeseja continuar [s/n]?");
        resposta = getche();
    }

	// Solicita que o usuário que entre com algum dado qualquer

	/* Fim */ 

	system("PAUSE"); // Apenas no Windows 
	return 0; // Pausa o programa para que ele não feche inesperadamente assim como o comando "getchar();" 

	// Outra jeito de pausar o programa:

	/*getchar();  "Pegar" caracter, mas neste caso irá fazer apenas pausar o programa para na hora da exercução
		    do programa não fechar instantaneamente */
	


   } // Fim 
