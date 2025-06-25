#include <stdio.h>

int main(){
    int porcoes[5] = {300, 1500, 600, 1000, 150};
    int gMandioca = 225;
    for(int i = 0; i < 5; i++){
        int qntPorcoes;
        scanf("%d", &qntPorcoes);
        gMandioca += porcoes[i] * qntPorcoes;
    }
    printf("%d\n", gMandioca);
    return 0;
}