#include <stdio.h>

int main(){
    int abas, acoes;
    scanf("%d %d", &abas, &acoes);
    for(int i = 0; i < acoes; i++){
        char acao[7];
        scanf(" %s", acao);
        abas = acao[0] == 'f' ? abas + 1 : abas - 1;
    }
    printf("%d\n", abas);
}