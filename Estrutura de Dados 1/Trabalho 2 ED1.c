/*Faça um programa de pesquisa de um cinema sobre uma determinado filme. As pessoas informam o sexo, 
idade e opinião sobre o filme (Ruim, Bom ou Ótimo) e os dados são armazenados numa lista duplamente 
encadeada. O programa deve permitir fornecer: 
(1) a média de idade das pessoas com uma determinada opinião; 
(2) a porcentagem de pessoas que responderam a pesquisa por sexo; e 
(3) a porcentagem de cada opinião.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int id;
typedef int op;
typedef int ge;
int nCadastro;

struct pessoa{
	id idade;
	op opiniao;
	ge genero;
	struct pessoa *dir;
	struct pessoa *esq;
};

struct pessoa *participante = NULL;

void menu(){
	printf("\n-----------------------------------------------------------------\n");
	printf("\tCADASTRO DE OPINIAO SOBRE O FILME\n");
	printf("-----------------------------------------------------------------\n");
	printf("Escolha a opcao abaixo:\n");
	printf("1 - Cadastro de opiniao\n");
	printf("2 - Média de idade das pessoas com uma determinada opiniao\n");
	printf("3 - Porcentagem de pessoas que responderam a pesquisa por genero\n");
	printf("4 - Porcentagem de cada opiniao\n");
	printf("5 - Listar opinioes\n");
	printf("6 - Finalizar sistema\n");
}

void adicionarOpiniao(){//id idade, op opiniao, ge genero){
	struct pessoa *novo_participante = (struct pessoa *)malloc(sizeof(struct pessoa));
	//novo_participante->idade = idade;
	//novo_participante->opiniao = opiniao;
	//novo_participante->genero = genero;
	printf("\nDigite a idade: ");
	scanf("%d", &novo_participante->idade);
	
	printf("\nDigite o genero: ");
	printf("\n1-Feminino\n2-Masculino\nDigite: ");
	scanf("%d", &novo_participante->genero);
	
	printf("\nDigite a opniao sobre o filme: ");
	printf("\n1-Ruim\n2-Bom\n3-Otimo\nDigite: ");
	scanf("%d", &novo_participante->opiniao);
	
	if(participante==NULL){
		novo_participante->dir=NULL;
		novo_participante->esq=NULL;
		participante = novo_participante;
	}else{
		novo_participante->dir = participante;
		if(participante->esq==NULL){
			novo_participante->esq = NULL;
		}else{
			novo_participante->esq=participante->esq;
			participante->esq->dir=novo_participante;
		}
		participante->esq=novo_participante;
	}
	nCadastro ++;
}

void imprimir(id ida, ge gen, op opi){
	printf("\nIdade: %d | Genero: %d | Opiniao: %d", ida,gen,opi);
}
void listar(){
	struct pessoa *p=participante;
	if(participante!=NULL){
		do{
			imprimir(p->idade, p->genero,p->opiniao);
			printf("\n\n");
			p = p->dir;
		}while(p!=NULL);
		p=participante->esq;
		while(p!=NULL){
			imprimir(p->idade,p->genero,p->opiniao);
			printf("\n\n");
			p=p->esq;
		}
		}
}
//case 2 - Média de idade das pessoas com uma determinada opiniao
void case2(){
	float mRuim, mBom, mOtimo;
	struct pessoa *p=participante;
	if(participante!=NULL){
		do{
			if(p->opiniao==1){
				mRuim = (p->idade)+mRuim;
			}else{
				if(p->opiniao==2){
					mBom = mBom + (p->idade);
				}else{
					mOtimo = mOtimo + (p->idade);
				}
			}
			p = p->dir;
		}while(p!=NULL);
		p=participante->esq;
		while(p!=NULL){
			
			p=p->esq;
		}
		}
		printf("\nMedia de idade opiniao do tipo Ruim: %d",mRuim/nCadastro);
		printf("\nMedia de idade opiniao do tipo Bom: %d",mBom/nCadastro);
		printf("\nMedia de idade opiniao do tipo Otimo: %d",mOtimo/nCadastro);
}

//case 3 - Porcentagem de pessoas que responderam a pesquisa por genero
void case3(){
	int f, m;
	struct pessoa *p=participante;
	if(participante!=NULL){
		do{
			if(p->genero==1){
				f++;
			}else{
				m++;
			}
			p = p->dir;
		}while(p!=NULL);
		p=participante->esq;
		while(p!=NULL){
			if(p->genero==1){
				f++;
			}else{
				m++;
			}
			p=p->esq;
		}
		}
		printf("\nPorcentagem de resposatas femininas: %d",(f*100)/nCadastro);
		printf("\nPorcentagem de resposatas masculinas: %d",(m*100)/nCadastro);
}

//case 4 - Porcentagem de cada opiniao
void case4(){
	int ruim, bom, otimo;
	struct pessoa *p=participante;
	if(participante!=NULL){
		do{
			if(p->opiniao==1){
				ruim++;
			}else{
				if(p->opiniao==2){
					bom++;
				}else{
					otimo++;
				}
			}
			p = p->dir;
		}while(p!=NULL);
		p=participante->esq;
		while(p!=NULL){
			if(p->opiniao==1){
				ruim++;
			}else{
				if(p->opiniao==2){
					bom++;
				}else{
					otimo++;
				}
			}
			p=p->esq;
		}
		}
		printf("\nPorcentagem de opiniao do tipo Ruim: %d",(ruim*100)/nCadastro);
		printf("\nPorcentagem de opiniao do tipo Bom: %d",(bom*100)/nCadastro);
		printf("\nPorcentagem de opiniao do tipo Otimo: %d",(otimo*100)/nCadastro);
}

int main(){
	
	int opMenu;
	
	do{
		menu();
		scanf("%d", &opMenu);
		switch(opMenu){
			case 1:
				adicionarOpiniao();
				break;
			case 2:
				//Média de idade das pessoas com uma determinada opiniao
				case2();
			case 3:
				//Porcentagem de pessoas que responderam a pesquisa por genero
				case3();
				break;
			case 4:
				case4();
				break;
			case 5:
				listar();
				break;
			case 6:
				return 0;
				break;
			default:
    			printf("\nOpcao invalida! Selecione uma nova opcao!\n");	
		}
	}while(opMenu!=0);
		
}