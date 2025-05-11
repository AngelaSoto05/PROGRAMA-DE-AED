#include <stdio.h>

int main() {
    int n;

    printf("Ingrese el tamaño de los vectores: ");
    scanf("%d", &n);

    float a[n], b[n], resultado = 0;

    printf("Ingrese los elementos del vector A:\n");
    for (int i = 0; i < n; i++) {
        printf("A[%d] = ", i);
        scanf("%f", &a[i]);
    }

    printf("Ingrese los elementos del vector B:\n");
    for (int i = 0; i < n; i++) {
        printf("B[%d] = ", i);
        scanf("%f", &b[i]);
    }

    for (int i = 0; i < n; i++) {
        resultado += a[i] * b[i];
    }

    printf("\nProducto punto: %.2f\n", resultado);

    return 0;
}
