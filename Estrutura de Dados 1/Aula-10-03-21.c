//                          Exercícios da lista

// 4. Faça um programa que leia uma string e depois apresente-a com letras maiúsculas.

/*#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
int main (){
    setlocale(LC_ALL,"");

    //printf("%d ", 'a');
    //printf("%c", 97);

    char nome[5];
    int i;
    printf("Informe seu nome: ");
    gets(nome);
    i = 0;
    while (nome[i] != '\0'){
        nome[i] = toupper(nome[i]);
        i++;
    }

    for (i = 0; i < strlen(nome); i++) {
        nome[i] = toupper(nome[i]);
    }

    puts(nome);

    printf("\n\n");

}*/

// 5. Faça um programa para gerar a matriz A2 x 4,
// tal que aij = 5+2j, se i=j ou aij = i^2 - j, se i != j

/*#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
int main (){
    setlocale(LC_ALL,"");

    int A[2][4], i, j;

    for (i=0; i < 2; i++){
        for (j = 0; j < 4; j++) {
            if (i == j) {
                A[i][j] = 5 + 2 * j;
            } else {
                A[i][j] = i * i - j;
            }
        }
    }

    for (i=0; i < 2; i++){
        for (j = 0; j < 4; j++) {
            printf("%10d", A[i][j]);
        }
        printf ("\n");
    }
    printf("\n\n");
} */

// Questão 6:
/*
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
int main (){
    setlocale(LC_ALL,"");

    int A[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int B[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};
    int C[3][3], i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C[i][j] = A[i][j] + B[i][j];
            printf("%10d", C[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
}*/

// Questão 7:
/*
#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>
int main (){
    setlocale(LC_ALL,"");

    int cubo[2][3][4];
    int x, y, z;

    for (x = 0; x < 2; x++) {
        for (y = 0; y < 3; y++) {
            for (z = 0; z < 4; z++) {
                cubo[x][y][z] = x + y + z + 3; // +3 para compensar o valor de cada índice, pq começa com 0
                printf("Cubo[%d][%d][%d] = %d\n",x,y,z,cubo[x][y][z]);   
            }
        }
    }
    printf("\n\n");
}*/

//              Conteúdo da aula

#include <stdio.h>
#include <locale.h>
#include <ctype.h>
#include <string.h>

struct Endereco {
    char rua[100];
    char bairro[30];
    char cidade[50];
    char estado[2];
    char cep[15];
};

struct Cadastro{
    char cpf[15];
    char nome[50];
    struct Endereco endereco;
    char telefone[10];
    char estado_civil;
    float salario;    
};

void leitura_ficha(struct Cadastro ficha){
    // struct Cadastro ficha;
    printf("\n*** FICHA DO FUNCiONÁRIO ***\n\n");
    
    printf("CPF: ");
    fflush(stdin);
    gets(ficha.cpf);
    
    printf("Nome: ");
    fflush(stdin);
    gets(ficha.nome);
    
    printf("Endereço: \n");
    printf("    Rua: ");
    fflush(stdin);
    gets(ficha.endereco.rua);
    printf("    Bairro: ");
    fflush(stdin);
    gets(ficha.endereco.bairro);
    printf("    Cidade: ");
    fflush(stdin);
    gets(ficha.endereco.cidade);
    printf("    Estado: ");
    fflush(stdin);
    gets(ficha.endereco.estado);
    printf("    CEP: ");
    fflush(stdin);
    gets(ficha.endereco.cep);
    
    printf("Telefone: ");
    fflush(stdin);
    gets(ficha.telefone);

    printf("Estado Civil (C/S): ");
    fflush(stdin);
    ficha.estado_civil = getchar();

    printf("Salário: ");
    scanf("%f", &ficha.salario);
    
    


    printf("\n\n");
}


int main (){
    setlocale(LC_ALL,"");

    struct Cadastro empregado1, empregado2;
    leitura_ficha(empregado1);
    leitura_ficha(empregado2);
    
    


    printf("\n\n");
}