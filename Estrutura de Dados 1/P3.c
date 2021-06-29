#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


struct Celula {
	char tipopersona;
	struct Celula *esq;
	struct Celula *dir;
};

struct Pilha {
	struct Celula *topo;
};

typedef struct Pilha duracell;

struct Pessoa {
	int inscricao;
	char nome[30];
	char sexo;
	char telefone[15];
	duracell personalidade;
	struct Pessoa *pretendente;
	struct Pessoa *relacao;
	struct Pessoa *proximo;
};
typedef struct Pessoa listapessoas;


listapessoas* inicializa(){
	return NULL;
}

listapessoas* insereInicio(listapessoas* listaPTR, int inscricao, char nome[30], char sexo, char telefone[15], duracell P){
	listapessoas* novoNoh = (listapessoas* ) malloc(sizeof(listapessoas));
	novoNoh->inscricao = inscricao;
	strcpy(novoNoh->nome, nome);
	novoNoh->sexo = sexo;
	strcpy(novoNoh->telefone, telefone);
	novoNoh->personalidade = P;
	novoNoh->proximo = listaPTR;
	return novoNoh;
}

void imprimeLista(listapessoas* listaPTR){
	for(listapessoas* ptr = listaPTR; ptr != NULL; ptr = ptr->proximo){
		printf(" %d ", ptr->inscricao);
	}
}

void Pinit(struct Pilha *pilha) {
	pilha->topo = NULL;
}

int PisEmpty(struct Pilha *pilha) {
	return (pilha->topo == NULL)?1:0;
}

struct Celula * CriarCelula(char tipopersona) {
	struct Celula *novaCelula = (struct Celula *)malloc(sizeof(struct Celula));
	novaCelula->tipopersona = tipopersona;
	novaCelula->esq = NULL;
	novaCelula->dir = NULL;
	return novaCelula;
}

void PUSH(struct Pilha *pilha, char tipopersona) {
	struct Celula *celula = CriarCelula(tipopersona);
	if (!PisEmpty(pilha)) {
	celula->esq = pilha->topo;
	pilha->topo->dir = celula;   
	}
	pilha->topo = celula;
}

int POP(struct Pilha *pilha, char *tipopersona) {
	struct Celula *celula;
	if (PisEmpty(pilha)) {
		return 0;
	}
	celula = pilha->topo;
	*tipopersona = celula->tipopersona;
	pilha->topo = celula->esq;
	if (!PisEmpty(pilha)) {
		pilha->topo->dir = NULL;
	}
	free(celula);
	return 1;
}

int TOP(struct Pilha *pilha, char *tipopersona) {
	if (!PisEmpty(pilha)) {
		*tipopersona = pilha->topo->tipopersona;
		return 1;
	}
	return 0;
}

int main () {
	setlocale(LC_ALL,"");
	int i, opc, inscricao;
	char nome[30], sexo, telefone[15], personalidade, n, tp;
	duracell P;

	listapessoas* listaPTR;
	
	listaPTR = inicializa();

	while (opc != 4) {
		printf("*****************************");
		printf("\nPrograma de Relacionamentos\n");
		printf("*****************************\n\n");
		printf("Escolha uma opção: \n");
	    printf("1 - Cadastrar pessoa\n");
	    printf("2 - Relacionar pessoa\n");
	    printf("3 - Listar casais\n");
	    printf("4 - Sair\n");
		printf("5 - Exibir Lista de pessoas\n");
		scanf ("%d", &opc);
		// system("cls");
		
		switch (opc) {
			case 1:
				printf("*****************************");
				printf("\nPrograma de Relacionamentos\n");
				printf("*****************************\n\n");
				printf("\n");
				
				printf("*****************************");
				printf("\nPreencha as Informações:\n");
				printf("*****************************\n\n");

				printf("Insira o número de inscrição: ");
				scanf (" %d", &inscricao);
				printf("\n");

				printf("Insira o nome: ");
				scanf (" %s", nome);
				printf("\n");

				printf("Insira o sexo: ");
				scanf (" %c", &sexo);
				printf("\n");

				printf ("Insira o telefone: ");
				scanf (" %s", telefone);
				
				printf("\n");

				Pinit(&P);

				printf("Agora seus tipos de personalidade. \nLembre-se que elas devem ser inseridas\n da menos predominante para a mais predominante: ");
				for(i=0;i<4;i++){
					printf("Insira a %dº personalidade: ", i+1);
					scanf (" %c", &tp);
					PUSH(&P,tp);
				}
				
				printf("\n");
				printf("Pilha: ");
				while(POP(&P,&n)) {
					printf("%c\n",n);
				}

				listaPTR = insereInicio(listaPTR, inscricao, nome, sexo, telefone, P);
				printf("\n");
				
				break;

				
				
			


			
			/*
			case 2:
				printf("*****************************");
				printf("\nPrograma de Relacionamentos\n");
				printf("*****************************\n\n");
				printf("Insira o código da primeira pessoa: ");
				scanf ("%d", &cod1);
				printf("Insira o código da segunda pessoa: ");
				scanf ("%d", &cod2);
				printf("\n");
				
				if (pessoa[cod1].sexo == pessoa[cod2].sexo){
					printf("Não é possível realizar o relacionamento, pois o sexo é o mesmo. ");
				} else {
					if (pessoa[3].relacao != 0) {
						printf("Não é possível realizar o relacionamento, pois esta pessoa já possui relacionamento. ");
					} else {
						pessoa[cod1].relacao=&pessoa[cod2];
			            pessoa[cod2].relacao=&pessoa[cod1];
						printf("Relacionamento realizado com sucesso.\n\n");
					}
				}
				break;
			
			case 3:
				system("cls");
				printf("*****************************");
				printf("\nPrograma de Relacionamentos\n");
				printf("*****************************\n\n");
				printf("Casais: \n");
				
				if (pessoa[cod1].relacao == pessoa[cod2].relacao) {
				    printf("Nome: %s\n", pessoa[cod1].nome);
				}
				if (pessoa[cod2].relacao == &pessoa[cod1]) {
					printf("Nome: %s\n", pessoa[cod2].nome);
				}
				
				break;
			
			
			// mostra todas as pessoa cadastradas
			for (i=0; i<qtd; i++) {  
			    printf("\nCodigo: %d\n", pessoa[i].inscricao);
			    printf("Nome: %s\n", pessoa[i].nome);
			    printf("Sexo: %s\n", pessoa[i].sexo);
			}
			*/
			
			case 4:
				printf("O programa será encerrado. ");
				break;
			
			case 5:
				if(listaPTR != NULL){
					printf("\nLista: ");
					imprimeLista(listaPTR);
					printf("\n");
				}
				else{
					printf("\n\nLista vazia!\n\n");
				}
				break;

			default:
				printf("Opção inválida! \n");
		}
	}
}