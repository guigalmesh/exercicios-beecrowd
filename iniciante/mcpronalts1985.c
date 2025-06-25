#include <stdio.h>

int main(){
    int n;
    float s = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        int p, q;
        float v;
        scanf("%d %d", &p, &q);
        switch(p){
            case 1001: v = 1.5;
                break;
            case 1002: v = 2.5;
                break;
            case 1003: v = 3.5;
                break;
            case 1004: v = 4.5;
                break;
            case 1005: v = 5.5;
                break;
        }
        s += q * v;
    }
    printf("%.2f\n", s);
    return 0;
}