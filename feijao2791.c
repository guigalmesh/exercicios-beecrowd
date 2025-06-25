#include <stdio.h>

int main(){
    int n[4];
    for(int i = 1; i <= 4; i++){
        scanf("%d", &n[i]);
        if(n[i] == 1)
            printf("%d\n", i);
    }
    return 0;
}