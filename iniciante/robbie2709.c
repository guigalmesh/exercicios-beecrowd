#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int* cria_vetor(int tamanho){
    int *vetor;
    vetor = (int *)malloc(tamanho*sizeof(int));
    return vetor;
}

int soma_valores(int passo, int qntElementos, int *vetor){
    int soma = 0;
    for(int i = qntElementos - 1; i > -1; i -= passo){
        soma += vetor[i];
    }
    return soma;
}

int eh_primo(int num){
    if(num <= 1)
        return false;
    if(num == 2)
        return true;
    if(num % 2 == 0)
        return false;
    for(int i = 3; (i * i) <= num; i += 2){
        if(num % i == 0)
            return true;
    }
    return false;
}

int main(){
    int M, N, soma;
    int *vetor_moedas;

    while(scanf("%d", &M) == 1){
        vetor_moedas = cria_vetor(M);

        for(int i = 0; i < M; i++){
            scanf("%d", &vetor_moedas[i]);
        }

        scanf("%d", &N);

        soma = soma_valores(N, M, vetor_moedas);

        if(eh_primo(soma))
            printf("You're a coastal aircraft, Robbie, a large silver aircraft\n");
        else
            printf("Bad boy! I'll hit you.\n");

        free(vetor_moedas);
    }
    return 0;
}