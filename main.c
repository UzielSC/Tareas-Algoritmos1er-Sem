/*
Programa: Generador de sucesiones numéricas
Autor: Uziel Salgado Correa
Propósito: Este programa genera sucesiones numéricas utilizando la fórmula 𝑛(𝑛+1)(2𝑛+1)/6, donde n son números enteros positivos diferentes de cero. El programa solicita al usuario ingresar un número entero positivo y muestra la sucesión numérica correspondiente desde 1 hasta el valor ingresado. Luego, pregunta al usuario si desea generar otra sucesión numérica. Si el usuario acepta, se repite el proceso; de lo contrario, el programa termina.
*/

#include <stdio.h>

int main() {
    char opcion;

    // Bucle principal para generar sucesiones numéricas
    do {
        int n, i;

        // Se solicita al usuario que ingrese un número entero positivo
        printf("Ingresa un número entero positivo: ");
        scanf("%d", &n);

        // Se verifica que n sea un número entero positivo diferente de cero
        while (n <= 0) {
            printf("Por favor, ingresa un número entero positivo diferente de cero: ");
            scanf("%d", &n);
        }

        // Se genera y muestra la sucesión numérica
        printf("Salida = ");
        for (i = 1; i <= n; i++) {
            int resultado = (i * (i + 1) * (2 * i + 1)) / 6;
            printf("%d", resultado);
            if (i < n) {
                printf(", ");
            }
        }
        printf("\n");

        // Preguntar al usuario si desea generar otra sucesión numérica
        printf("¿Deseas generar otra sucesión numérica? (S/N): ");
        scanf(" %c", &opcion);
    } while (opcion == 'S' || opcion == 's');

    // Mensaje de fin del cálculo de sucesiones numéricas
    printf("¡Fin del cálculo de sucesiones numéricas!\n");

    return 0;
}