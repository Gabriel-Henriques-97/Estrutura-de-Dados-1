// Exercícios de revisão da linguagem C

// Questão 1: Calcular velocidade média.
/*#include <stdio.h>
int main (){
    int vm, dist, tempo;
    printf("Informe a distância percorrida (Km): ");
    scanf("%d", &dist);
    printf("Informe o tempo decorrido (h): ");
    scanf("%d", &tempo);
    vm = (dist/tempo);
    printf("A velocidade média é de %d Km/h.\n", vm);
}*/



// Questão 2: 



// Questão 3: Verificar formação de um triângulo e seu tipo.
/*#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"");

    float l1, l2, l3;

    printf("Forneça 3 números: \n");
    scanf("%f%f%f", &l1, &l2, &l3);

    if ( (l1 < l2 + l3) && (l2 < l1 + l3) && (l3 < l1 + l2) ){
        if ( (l1 == l2) && (l2 == l3) ){
            printf("Triângulo equilátero. \n");
        } else {
            if (l1 != l2 && l2 != l3 && l3 != l1){
                printf("Triângulo Escaleno. \n");
            } else {
                printf("Triângulo isósceles. \n");
            }
        }
    } else {
        printf("Não formam um triângulo. \n");
    }
}*/



// Questão 4: Função para retornar fatorial de um inteiro 
// passado como parâmetro e implementar um programa para usa-la. 
/*#include <stdio.h>
#include <locale.h>

int fatorial(int n){
    int f = 1, i;
    for(i = 2; i <= n; i++){
        f = f*i;
    }
    return f;
}

int main (){
    setlocale(LC_ALL,"");
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    printf("%d! = %d\n\n", n, fatorial(n));
}*/



// Questão 5: 
// 
#include <stdio.h>
#include <locale.h>

int fatorial(int n){
    int f = 1, i;
    for(i = 2; i <= n; i++){
        f = f*i;
    }
    return f;
}

float calculaH(int n){
    float h = 0;
    int i;
    for (i = 1; i <= n; i++){
        h += 1.0/fatorial(i); // h = h + 1/fatorial(i)
    }
    return h;
}

int main (){
    setlocale(LC_ALL,"");
    int n;
    printf("Digite um inteiro: ");
    scanf("%d", &n);
    printf("H = %.2f\n\n", calculaH(n));
}

