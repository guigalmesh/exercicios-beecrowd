#include <stdio.h>

int fatorialrecursiva(int n){
    if(n == 1)
        return 1;
    return n * fatorialrecursiva(n -1);
}

int main(){
    int n, fat;
    scanf("%d", &n);
    fat = fatorialrecursiva(n);
    printf("%d\n", fat);
    return 0;
}