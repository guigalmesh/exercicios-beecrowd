#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int rM, r1, r2;
        scanf("%d %d", &r1, &r2);
        rM = r1 + r2;
        printf("%d\n", rM);
    }
}