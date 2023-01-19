#include <stdio.h>

void inverte(int vet[], int n){
    int aux[n];
    for(int i = 0; i < n; i++){
        aux[i] = vet[i];
    }
    for(int i = 0; i < n; i++){
        vet[i] = aux[n-1-i];
        printf("%i", vet[i]);
    }
}
int main(){
    int n[5] = {1, 2, 3, 4, 5};
    inverte(n, 5);
    return 0;
}
