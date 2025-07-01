#include <stdio.h>
#include <string.h>
void printWord(char texto[]){
    int size = strlen(texto);
    for(int i = 0; i < size; i++){
        printf("%c", texto[i]);
    }
    printf("\n");
}
int main(){
    int c, n;
    scanf("%d %d", &c, &n);
    char cifra_primaria[c];
    char cifra_segundaria[c];
    fgets(cifra_primaria, c, stdin);
    fgets(cifra_segundaria, c, stdin);
    for(int i = 0; i < n; i++){
        char frase[1000];
        fgets(frase, 1000, stdin);
        int i = 0;
        while(frase[i] != '\0'){
            printf("%c\n", frase[i]);
            for(int j = 0; j < c; j++){
                printf("->%c\n", cifra_primaria[j]);
                printf("->>%c\n", cifra_segundaria[j]);
                if(frase[i] == cifra_segundaria[j])
                    frase[i] = cifra_primaria[j];
                if(frase[i] == cifra_primaria[j])
                    frase[i] == cifra_segundaria[j];
            }
            i++;
        }
        fputs(frase, stdout);
    }
    return 0;
}