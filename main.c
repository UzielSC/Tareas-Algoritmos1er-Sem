/*
Programa: Generador de signo zodiacal a travéz de la fecha de nacimiento
Autor: [Tu nombre]
Propósito: Este programa indicara cual es el signo zodiacal del usuatio una vez ingresada su fecha de nacimiento en el formato que se solicita.
*/
#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // Para la función sleep

// Función para verificar si el año es bisiesto
bool esBisiesto(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return true;
    else
        return false;
}

// Función para validar la fecha ingresada por el usuario
bool validarFecha(int day, int month, int year) {
    if (year < 0 || month < 1 || month > 12)
        return false;

    int maxDays = 31;

    switch (month) {
        case 4:
        case 6:
        case 9:
        case 11:
            maxDays = 30;
            break;
        case 2:
            maxDays = (esBisiesto(year)) ? 29 : 28;
            break;
    }

    if (day < 1 || day > maxDays)
        return false;

    return true;
}

// Función para obtener el signo zodiacal
const char *obtenerSignoZodiacal(int day, int month) {
    const char *signosZodiaco[] = {"Capricornio", "Acuario", "Piscis", "Aries", "Tauro", "Géminis",
                                    "Cáncer", "Leo", "Virgo", "Libra", "Escorpio", "Sagitario"};

    // Fechas de cambio de signo
    int fechasCambios[] = {20, 19, 21, 20, 21, 21, 23, 23, 23, 23, 22, 22};

    if (day < fechasCambios[month - 1]) {
        return signosZodiaco[month - 1];
    } else {
        return signosZodiaco[month % 12];
    }
}

int main() {
    char respuesta;
    do {
        int day, month, year;
        printf("Ingresa tu fecha de nacimiento en formato dd/mm/aaaa: ");
        if (scanf("%d/%d/%d", &day, &month, &year) != 3 || !validarFecha(day, month, year)) {
            printf("Formato de fecha incorrecto o fecha no válida. Por favor, inténtalo nuevamente.\n");
            while (getchar() != '\n'); // Limpiar el buffer de entrada
            // Esperar 2 segundos antes de solicitar una nueva entrada
            sleep(2);
        }

        const char *signo = obtenerSignoZodiacal(day, month);
        printf("Tu signo zodiacal es: %s\n", signo);

        printf("¿Deseas ingresar otra fecha de nacimiento? (s/n): ");
        scanf(" %c", &respuesta);

    } while (respuesta == 's' || respuesta == 'S');

    printf("Gracias por consultar tu signo. ¡Excelente día!\n");

    return 0;
}
