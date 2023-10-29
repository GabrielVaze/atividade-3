#include <stdio.h>
#include <stdbool.h>

int main() {
    int tamanho;
    bool opostas = true;
    int matriz1[tamanho][tamanho];
    int matriz2[tamanho][tamanho];

    printf("Digite o tamanho das matrizes: ");
    scanf("%d", &tamanho);

 
    if (tamanho <= 0) {
        printf("Tamanho inválido.\n");
        return 1;
    }


    printf("Digite os elementos da primeira matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }

 
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz1[i][j] + matriz2[i][j] != 0) {
                opostas = false;
                break;
            }
        }
        if (!opostas) {
            break;
        }
    }

    if (opostas) {
        printf("As matrizes são opostas.\n");
    } else {
        printf("As matrizes não são opostas.\n");
    }

    return 0;
}

