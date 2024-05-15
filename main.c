#include <stdio.h>
#include <stdlib.h>

/*
 * Descripción: Este programa permite al usuario ingresar un número entero positivo 'n',
 * y muestra la suma de los primeros 'n' números pares.
 * Si el valor ingresado no es positivo o no es un entero, muestra un mensaje de error
 * y permite al usuario ingresar el valor correctamente.
 * Una vez hecho el cálculo del número ingresado, pregunta si se desea ingresar otro número.
 * Si la respuesta es sí, el programa solicita otro número 'n'.
 * Si la respuesta es no, el programa muestra un mensaje de despedida y finaliza.
 * 
 * Creado por: Uziel Salgado Correa
 */
int main() {
    int n, suma;
    char continuar;

    do {
        suma = 0;

        // Solicitar al usuario ingresar un número entero positivo para 'n'
        printf("Ingrese un número entero positivo para 'n': ");
        
        // Leer el valor ingresado por el usuario
        while (scanf("%d", &n) != 1 || n <= 0) {
            // Limpiar el buffer de entrada en caso de error
            while (getchar() != '\n');
            
            // Mostrar un mensaje de error y volver a solicitar el ingreso
            printf("Por favor ingrese un número entero positivo válido: ");
        }

        // Calcular y mostrar la suma de los primeros 'n' números pares
        for (int i = 1; i <= n; i++) {
            suma += 2 * i;
            printf("Para n = %d, Suma = %d.\n", i, suma);
        }

        // Preguntar al usuario si desea ingresar otro número
        printf("\n¿Desea ingresar otro número? (s/n): ");
        scanf(" %c", &continuar);
        
        // Limpiar el buffer de entrada
        while (getchar() != '\n');

    } while (continuar == 's' || continuar == 'S');

    // Mensaje de despedida
    printf("¡Hasta luego!\n");

    return 0;
}
