#include <stdio.h> // stdio.h: Biblioteca padrão de Entrada/Saida - Standard Input-Output Header - Cabeçalho Padrão de Entrada/Saída
#include <stdlib.h> // stclib.h: Biblioteca de Propósito Geral -  Ela possui funções envolvendo alocação de memória, controle de processos, conversões e outras
#include <locale.h>

int main(){

    setlocale (LC_ALL, "Portuguese");


    // Inicio variáveis
    int i, j, flag = 0, vetor[8], verificador, op, posicao;


    for(i = 0; i < 8; i++){

        printf("Informe %dº número inteiro que ficará na posição %d do vetor: ", i + 1, i);
        scanf("%d", &verificador);

        for(j = 0; j <= i - 1; j++){

                if(verificador == vetor[j]){

                    flag = 1;

                }
        }

        if (flag == 1) {

            printf("\nERRO!! Informe número que não seja repetido.\n\n");

            flag = 0;

            i -= 1;

        } else {

            vetor[i] = verificador;

        }

    } printf("\n\n");

    do{

        printf("0 - SAIR para finalizar o programa \n");
        printf("1 - PESQUISAR número no vetor \n");
        scanf("%d", &op);

        if (op == 1) {

            printf("\nInforme número para procurar: ");
            scanf("%d", &verificador);

            for(i = 0; i < 8; i++){

                if(verificador == vetor[i]){

                    posicao = i;

                }
            }

            (posicao < 0 || posicao > 7) ? printf("\nNúmero procurado não existe no vetor\n\n") : printf("\nNúmero procurado encontra-se na posição %d do vetor\n\n", posicao);

                posicao = "";

       }

    }while(op != 0);

    printf("\n\nPrograma executado com sucesso!!");

    printf("\n\n");

system("pause"); // Pausa o programa após executar

return 0;

}
