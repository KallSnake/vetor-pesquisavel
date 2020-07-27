#include <stdio.h> // stdio.h: Biblioteca padr�o de Entrada/Saida - Standard Input-Output Header - Cabe�alho Padr�o de Entrada/Sa�da
#include <stdlib.h> // stclib.h: Biblioteca de Prop�sito Geral -  Ela possui fun��es envolvendo aloca��o de mem�ria, controle de processos, convers�es e outras
#include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");


    // Inicio vari�veis
    int i, j, flag = 0, vetor[8], verificador, op, posicao;


    for(i = 0; i < 8; i++){

        printf("Informe %d� n�mero inteiro que ficar� na posi��o %d do vetor: ", i + 1, i);
        scanf("%d", &verificador);

        for(j = 0; j <= i - 1; j++){

                if(verificador == vetor[j]){

                    flag = 1;

                }
        }

        if (flag == 1) {

            printf("\nERRO!! Informe n�mero que n�o seja repetido.\n\n");

            flag = 0;

            i -= 1;

        } else {

            vetor[i] = verificador;

        }

    } printf("\n\n");

    do{

        printf("0 - SAIR para finalizar o programa \n");
        printf("1 - PESQUISAR n�mero no vetor \n");
        scanf("%d", &op);

        if (op == 1) {

            printf("\nInforme n�mero para procurar: ");
            scanf("%d", &verificador);

            for(i = 0; i < 8; i++){

                if(verificador == vetor[i]){

                    posicao = i;

                }
            }

            (posicao < 0 || posicao > 7) ? printf("\nN�mero procurado n�o existe no vetor\n\n") : printf("\nN�mero procurado encontra-se na posi��o %d do vetor\n\n", posicao);

                posicao = "";

       }

    }while(op != 0);

    printf("\n\nPrograma executado com sucesso!!");

    printf("\n\n");

system("pause"); // Pausa o programa ap�s executar

return 0;

}
