/* Fa�a um programa de relacionamento entre pessoas para um grupo evang�lico e que possua as seguintes op��es:

a) Cadastrar Pessoa - realizar o cadastro de cada pessoa numa estrutura Pessoa com as seguintes informa��es: 
codigo (inteiro), nome (30 caracteres), sexo (M/F) e relacao (ponteiro para Pessoa). 
Considere que podem ser cadastrados no m�ximo 60 pessoas e que o valor do campo relacao ser� preenchido em outra funcionalidade.

b) Relacionar Pessoas � realiza o relacionamento entre duas pessoas. 
Para isto, o sistema deve pedir os c�digos das duas pessoas e preencher o campo relacao do cadastro de cada uma delas. 
O relacionamento n�o pode ser realizado entre pessoas que j� possuam um relacionamento ou de mesmo sexo.

c) Listar Casais - lista os casais cadastrados no programa. */

#include <stdio.h>
#include <stdlib.h>

struct Pessoas {
	int codigo;
	char nome[30];
	char sexo[10];
	*relacao;
};

int main () {
	
	struct Pessoas pessoa[1];
	int i, qtd;
	
	printf("*****************************");
	printf("\nPrograma de Relacionamentos\n");
	printf("*****************************\n\n");
	printf("Cadastrar quantas pessoas? ");
	scanf ("%d", &qtd);
	printf("\n");
	system("cls");
	
	printf("*****************************");
	printf("\nPreencha as Informacoes:\n");
	printf("*****************************\n\n");
	for (i=0; i<qtd; i++) {
		printf("Codigo: ");
		scanf ("%d", &pessoa[i].codigo);
		
		printf("Nome: ");
		fflush(stdin);
		gets(pessoa[i].nome);
		
		printf("Sexo: ");
		fflush(stdin);
		gets(pessoa[i].sexo);
		printf("\n");
	}
	
	system("cls");
	printf("*****************************");
	printf("\nPrograma de Relacionamentos\n");
	printf("*****************************\n\n");
	printf("Resultado: \n");
	for (i=0; i<qtd; i++) {
	    printf("\nCodigo: %d\n", pessoa[i].codigo);
	    printf("Nome: %s\n", pessoa[i].nome);
	    printf("Sexo: %s\n", pessoa[i].sexo);
	}
	
}
