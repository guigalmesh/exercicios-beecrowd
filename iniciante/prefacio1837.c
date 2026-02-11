#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    
    q = a / b;
    r = a % b;
    if(r < 0){
        if(b > 0){
            q--;
            r += b;
        }
        else{
            q++;
            r -= b;
        }
    }

    printf("%d %d\n", q, r);
}