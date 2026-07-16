#include <stdio.h>

int busca(int array[], int tamanho, int i){
    int maior = i;
    for(int j = i-1; j >= 0; j--){
        if(array[j] > array[maior]){
            maior = j;
        }
    }
    return maior;
}

void trocar(int array[], int tamanho, int i, int maior){
    if(maior != i){
        int temp;
        temp = array[maior];
        array[maior] = array[i];
        array[i] = temp;
    }
}

void imprimir(int array[], int tamanho){
    for(int i = 0; i < tamanho; i++) printf("%d ", array[i]);
}

void ordenarMaior(int array[], int tamanho){
    int maior;
    for(int i = tamanho-1; i > 0; i--){
        maior = busca(array, tamanho, i);
        trocar(array, tamanho, i, maior);
    }

    imprimir(array, tamanho);
}

int main () {
    int tamanho;
    scanf("%d", &tamanho);

    int array[tamanho];
    for(int i = 0; i < tamanho; i++){
        scanf("%d", &array[i]);
    }
    ordenarMaior(array, tamanho);
    return 0;
}