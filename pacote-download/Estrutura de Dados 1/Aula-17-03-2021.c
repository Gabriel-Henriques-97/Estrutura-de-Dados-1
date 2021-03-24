///*
# include <stdio.h>

// Estrutura de dados estática heterogênea

struct Ficha {
    int matricula;
    char nome[50];
};

int main () {

    struct Ficha aluno[2]; // Variável aluno do tipo struct Ficha
    int i;

    for (i=0; i < 2; i++){
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Nome: ");
        fflush(stdin);
        gets(aluno[i].nome);
        //scanf("%s", &aluno[i].nome);
    }
    printf("\nResultado: \n\n");
    printf("Matricula: %d\n", aluno->matricula);
    printf("Nome: %s", aluno->nome);


    printf("\n\n");
}
//*/

/*
//              QUESTÃO 8
# include <stdio.h>
# include <stdlib.h>

struct Ficha {
    char nome[50];
    int idade:
}; //aluno[10];

int i; 
int qtd=0;

int main () {
    for (i=0; i < 10; i++){
        printf("Nome: ");
        fflush(stdin);
        gets(aluno[i].nome);
        printf("Idade: ");
        scanf("%d",&aluno[i].idade);

        //if (aluno[i].idade > 18) {
        //    qtd++;
        //}
    }
    
    //printf("Quantidade: %d\n",qtd);
    //printf("Percentual: %f\n", qtd * 100 / 10);
    //puts("**LISTA DE ALUNOS MAIORES DE 18 ANOS: ");
    //for (i=0; i<10;i++){
    //    if (aluno[i].idade > 18) {
    //    puts(aluno[i].nome);
    //    }
    //}


    printf("\n\n");
}*/

/*
//              QUESTÃO 9
# include <stdio.h>

struct Ficha {
    int matricula;
    char nome[50];
    char curso[30];
    int periodo;
} aluno[5];

int i, matricula;

int main () {
    for ( i = 0; i < 5; i++){
        printf("Matricula: ");
        scanf("%d",&aluno[i].matricula);
        
        printf("Nome: ");
        fflush(stdin);
        gets(aluno[i].nome);

        printf("Curso: ");
        fflush(stdin);
        gets(aluno[i].curso);

        printf("Periodo: ");
        scanf("%d",&matricula);
    }

    printf("\n\nInforme a matricula para buscar: ");
    scanf("%d",&matricula);

    for (i = 0; i < 5; i++) {
        if (aluno[i].matricula == matricula) {
            printf("Matricula: %d\n", aluno[i].matricula);
            printf("Nome: %s", aluno[i].nome);
            printf("Curso: %s", aluno[i].curso);
            printf("Periodo: %d", aluno[i].periodo);
        }
    }
    
    

    


    printf("\n\n");
}*/

/*
//              QUESTÃO 10
# include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso{
    char compromisso[100]
    struct Data data;
} agenda[5];

int i, m, a;

int main () {
    for ( i = 0; i < 5; i++) {
        printf("Compromisso %d: ",i+1);
        fflush(stdin);
        gets(agenda[i].compromisso);
        printf("Data: ");
        scanf("%d/%d/%d", &agenda[i].data.dia, &agenda[i].data.mes, &agenda[i].data.ano);
    }
    
    puts("\n\n\** Busca de Compromisso **");
    printf("Mes: ");
    scanf("%d", &m);

    while (m != 0) {
        printf("Ano: ")
        scanf("%d", &a);

        for ( i = 0; i < 5; i++) {
            if (agenda.[i].data.mes == m && agenda[i].data.ano == a) {
                printf("%s\n\n", agenda[i].compromisso);
            }
            
        }
        printf("Mes: ");
        scanf("%d", &m);
    }
    


    printf("\n\n");
}*/

/*
# include <stdio.h>

int *p, a =10;

int main() {
    p = &a;
    printf("p = %d e *p = %d", p, *p);


    printf("\n\n");
}*/


/*
# include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void mmm(int *a, int *b, int *c){
    if (*b < *a) {
        swap(a,b);
    } 
    if (*c < *a) {
        swap(a,c);
    }
    if (*b < *c) {
        swap(b,c);
    }
}

int main() {
    int x = 5, y = 1, z = 9;
    mmm(&x, &y, &z);
    printf("x = %d, y = %d, z = %d", x, y, z);


    printf("\n\n");
}*/
