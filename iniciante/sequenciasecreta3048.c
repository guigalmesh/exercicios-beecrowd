#include <stdio.h>

int main(){
    int nM, sM = 1;
    scanf("%d", &nM);
    int sequencia[nM + 1];
    for(int i = 0; i < nM; i++){
        scanf("%d", &sequencia[i]);
    }
    for(int i = 1; i < nM; i++){
        if(sequencia[i - 1] != sequencia[i])
            sM++;
    }
    printf("%d\n", sM);
    return 0;
}