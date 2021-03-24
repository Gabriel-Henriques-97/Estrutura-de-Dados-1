//      Exemplos da aula 24/02/21
#include <stdio.h>
#include <locale.h>

// Escopo da variável: 
// Local: Funciona apenas dentro da Main ou da função.
// Global: Funciona fora das funções ou Main.
// Ex:
int x;          // Global.
float n1 = 9.0; // Global. Entrará em vigor o valor da variável local. 

// Função para somar dois números: 
float soma(float n1, float n2){
    float resultado = n1 + n2;
    return resultado;
}

// Procedimento
void realiza_soma(){
    float n1, n2;
    printf("Informe dois números: \n");
    scanf("%f%f", &n1, &n2);
    printf("Resultao da soma: %.2f \n\n", soma(n1, n2));
}

// Passagem de parâmetro por referência. 
void incrementa(int *num){ // A variável é um ponteiro, então recebe um endereço de memória.
    (*num)++;
    printf("Valor de num: %d\n", *num);
}


int main (){
    setlocale(LC_ALL,"");
    
    /*
    int n;
    printf("Informe um número: ");
    scanf("%d", &n);
    
    //printf("%.2f\n\n", soma(3,5));

    //realiza_soma();

    printf("Valor de n antes do incremento: %d\n", n);
    incrementa(&n); // Passagem de valor por referência. 

    printf("Valor de n após incremento: %d\n\n",n);
    */

    int a[5], b[5];
    int i;

    printf("Informe 5 números para o vetor A:\n");
    for (i=0; i<5; i++){
        scanf("%d", &a[i]);
    }

    printf("\nInforme 5 números para o vetor B:\n");
    for (i=0; i<5; i++){
        scanf("%d", &b[i]);
    }

    printf("\nSomatório dos vetores A e B:\n");
    for (i=0; i<5; i++){
        printf("%d\n\n", a[i] + b[i]);
    }
} 

