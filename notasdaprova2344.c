#include <stdio.h>

int main(){
    int nota;
    scanf("%d", &nota);
    int mNotas[5][2] = {
        {0, 0}, 
        {1, 35},
        {36, 60}, 
        {61, 85},
        {86, 100}
    };
    char vNotas_char[5] = {'E', 'D', 'C', 'B', 'A'};
    for(int i = 0; i < 5; i++){
        if(nota >= mNotas[i][0] && nota <= mNotas[i][1])
            printf("%c\n", vNotas_char[i]);
    }
    return 0;
}