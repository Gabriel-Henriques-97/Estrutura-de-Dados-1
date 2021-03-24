# include <stdio.h>

struct Ficha {
    int matricula;
    char nome[50];
};

int main () {

    struct Ficha aluno[2]; 
    int i;

    for (i=0; i < 2; i++){
        printf("Matricula: ");
        scanf("%d", &aluno[i].matricula);
        printf("Nome: ");
        fflush(stdin);
        gets(aluno[i].nome);
    }
    
	for (i=0; i<2; i++) {
		printf("\nResultado: \n\n");
	    printf("Matricula: %d\n", aluno[i].matricula);
	    printf("Nome: %s\n", aluno[i].nome);
	}


    printf("\n\n");
}
