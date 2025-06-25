#include <stdio.h>

int main(){
    int k;
    int vTop[7] = {1, 3, 5, 10, 25, 50, 100};
    scanf("%d", &k);
    for(int i = 0; i < 7; i++){
        if(vTop[i] == k){
            printf("Top %d\n", vTop[i]);
            break;
        }
        if(vTop[i] < k && vTop[i + 1] > k)
            printf("Top %d\n", vTop[i + 1]);
    }
    return 0;
}