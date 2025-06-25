#include <stdio.h>

int main(){
    int periodo, saldoInicial, menorValor, movimento;
    scanf("%d %d", &periodo, &saldoInicial);
    for(int i = 0; i < periodo; i++){
        scanf("%d", &movimento);
        saldoInicial += movimento;
        menorValor = i == 0 ? saldoInicial : menorValor;
        menorValor = saldoInicial < menorValor ? saldoInicial : menorValor;
    }
    printf("%d\n", menorValor);
    return 0;
}