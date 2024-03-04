#include <stdio.h>
#include <stdlib.h> // Necesario para utilizar la función rand()

void llenarMatrizAleatoria(int n, int matriz[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            matriz[i][j] = rand() % 10; // Genera números aleatorios entre 0 y 9
        }
    }
}

void multiplicarMatrices(int n, int matrizA[n][n], int matrizB[n][n], int resultado[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            resultado[i][j] = 0;
            for (int k = 0; k < n; ++k) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void mostrarMatriz(int n, int matriz[n][n]) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Ingrese el tamaño de las matrices cuadradas (nxn): ");
    scanf("%d", &n);

    int matrizA[n][n], matrizB[n][n], resultado[n][n];

    // Llenar matrices A y B de forma aleatoria
    llenarMatrizAleatoria(n, matrizA);
    llenarMatrizAleatoria(n, matrizB);

    printf("\nMatriz A (aleatoria):\n");
    mostrarMatriz(n, matrizA);

    printf("\nMatriz B (aleatoria):\n");
    mostrarMatriz(n, matrizB);

    multiplicarMatrices(n, matrizA, matrizB, resultado);

    printf("\nResultado de la multiplicación de matrices:\n");
    mostrarMatriz(n, resultado);

    return 0;
}
