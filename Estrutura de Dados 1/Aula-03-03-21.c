#include <stdio.h>
#include <ctype.h>

int main(){

    //char nome[10];

    /*nome[0] = 'J';
    nome[1] = 'O';
    nome[2] = 'A';
    nome[3] = '0';
    nome[4] = '\0';

    gets(nome);
    puts("Teste da funcao puts.");

    printf("%s\n\n", nome);*/
    
    //int lista[5] = {10, 20, 30, 40, 50};
    //printf("%d\n\n", lista[3]);
    //int lista[] = {0,1,3};
    //printf("%d\n\n", lista[2]);

    /*int lista[] = {0,1,3}, i;
    for (i = 0; i <= 2; i++){
        printf("%d\n", i);
    }*/

    //                                  MATRIZES:

    int matriz[3][5];
    int i, j;

    puts("Matriz linha a linha: \n");
    for (i = 0; i < 3; i++){
        for (j = 0; j < 5; j++){
            printf("M[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    puts("Matriz coluna a coluna: \n");
    for (j = 0; j < 5; j++){
        for (i = 0; i < 5; i++){
            printf("M[%d][%d] = %d \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }


////////////////////////////////////////////////////////////////////////////////////////
    
    //              Exercício 1: 4 num vetor de tras pra frente
    /*int lista[4], i;
    printf("Digite um número: \n");
    for (i=0; i < 4; i++){
        scanf("%d", &lista[i]);
    }
    printf("Lista em ordem inversa: \n");
    for (i = 3; i >= 0; i--){
        printf("%d\n", lista[i]);
    }*/



    //              Exercício 2:
    /*int lista[10], i, num;
    char resposta;

    do {
        printf("Digite 10 numeros: \n");
        for (i=0; i<10; i++){
            scanf("%d", &lista[i]);
        }

        printf("Digite um numero: ");
        scanf("%d",&num);
    
        // A: Minha resolução:
        if (lista[i] == num){
            printf("%d", lista[num]);
        } else {
            printf ("Numero nao encontrado. \n\n");
        }*/

        // A: Resolução 1:
        /*for (i=0; i<10; i++){
            if (lista[i] == num) {
                printf("Numero encontrado na posicao: %d\n\n", i+1);
            } else {
                if (i >= 9) {
                    puts("Numero nao existe! \n\n");
                }
            }
        }*/
        /*
        // A: Resolução 2:
        int achou = 0; //false
        for (i=0; i<10; i++){
            if (lista[i] == num) {
                printf("Numero encontrado na posicao: %d\n\n", i+1);
                achou = 1; //true
            } 
        }
        if (!achou) { // achou == 0 
                puts ("Numero nao existe! \n\n");
        }

        printf("Deseja procurar outro numero? [S/N] ");
        fflush(stdin);
        scanf("%c", &resposta);

    } 
    while (toupper(resposta) == 'S');*/

    /*
    int candidato, urna[5] = {0}, pessoa, maiorNumVoto = 0;
    printf("\n");
    for (pessoa = 0; pessoa < 10; pessoa++){
        printf("Informe seu voto [1-5]");
        scanf("%d", &candidato);
        urna[candidato-1]++;
    }

    printf("\n\nLista de candidatos e votos: \n\n");
    for (candidato = 0; candidato < 5; candidato++){
        printf("Candidato %d: %d\n", candidato+1, urna[candidato]);
        if (urna[candidato] > maiorNumVoto){
            maiorNumVoto = urna[candidato];
        }
    }

    puts("\n\nCandidato mais votados:\n");
    for (candidato = 0; candidato < 5; candidato++){
        if (urna[candidato] == maiorNumVoto){
            printf("Candidato %d\n\n", candidato+1);
        }
    }   */
}
