#include <stdio.h>

void ordenar(int *a, int *b, int *c) {
    int temp;
    if (*a < *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*a < *c) {
        temp = *a;
        *a = *c;
        *c = temp;
    }
    if (*b < *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}

int main() {
    int num1, num2, num3;
    char opcion;

    do {
        while(1) {
            printf("Introduce el primer número (mayor de 3 y menor de 15): ");
            scanf("%d", &num1);
            if (num1 <= 3 || num1 >= 15) {
                printf("Error: número fuera de los parámetros establecidos. Inténtalo de nuevo.\n");
                continue;
            }

            printf("Introduce el segundo número (mayor de 3 y menor de 15): ");
            scanf("%d", &num2);
            if (num2 <= 3 || num2 >= 15) {
                printf("Error: número fuera de los parámetros establecidos. Inténtalo de nuevo.\n");
                continue;
            }

            printf("Introduce el tercer número (mayor de 3 y menor de 15): ");
            scanf("%d", &num3);
            if (num3 <= 3 || num3 >= 15) {
                printf("Error: número fuera de los parámetros establecidos. Inténtalo de nuevo.\n");
                continue;
            }

            break;
        }

        ordenar(&num1, &num2, &num3);

        printf("Los números ordenados de mayor a menor son: %d, %d, %d\n", num1, num2, num3);

        printf("¿Deseas ingresar otra serie de números para ordenarlos? (s/n): ");
        scanf(" %c", &opcion);
    } while(opcion == 's' || opcion == 'S');

    printf("Gracias por usar este programa de ordenación. ¡Hasta luego, excelente día!\n");

    return 0;
}