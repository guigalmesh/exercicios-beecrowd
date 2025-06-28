#include <stdio.h>

int fibonacci(int n, int *p){
    (*p)++;
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    return fibonacci(n - 1, p) + fibonacci(n - 2, p);
}

int main(){
    int c, n, result, calls;
    int *p;
    p = &calls;
    scanf("%d", &c);
    for(int i = 0; i < c; i++){
        calls = -1;
        scanf("%d", &n);
        result = fibonacci(n, p);
        printf("fib(%d) = %d calls = %d\n", n, calls, result);
    }
    return 0;
}