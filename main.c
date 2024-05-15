#include <stdio.h>

int main() {
    int opcion;
    char respuesta;

    do {
        // Mostrando el mensaje de bienvenida y el menú
        printf("Bienvenid@s a la Bicheria, este es nuestro menú:\n");
        printf("1. Hot dog, papas y refresco\n");
        printf("2. Pizza, pasta individual y refresco\n");
        printf("3. Hamburguesa, papas de hojuela y refresco\n");
        printf("4. Banderilla, papas a la francesa y refresco\n");

        // Solicitando la selección al usuario
        printf("Por favor seleccione una opción (1-4): ");
        scanf("%d", &opcion);

        // Validando la opción ingresada por el usuario
        while(opcion < 1 || opcion > 4) {
            printf("Opción no válida. Por favor seleccione una opción válida del menú (1-4): ");
            scanf("%d", &opcion);
        }

        // Utilizando la estructura switch para manejar la selección del usuario
        switch(opcion) {
            case 1:
                printf("Usted ha seleccionado el Combo de hot dog, papas y refresco.\n");
                break;
            case 2:
                printf("Usted ha seleccionado Pizza, pasta individual y refresco.\n");
                break;
            case 3:
                printf("Usted ha seleccionado Hamburguesa, papas de hojuela y refresco.\n");
                break;
            case 4:
                printf("Usted ha seleccionado Banderilla, papas a la francesa y refresco.\n");
                break;
        }

        // Preguntar al usuario si desea hacer otro pedido
        printf("¿Desea hacer otro pedido? (S/N): ");
        scanf(" %c", &respuesta);

    } while(respuesta == 'S' || respuesta == 's');

    printf("Gracias por tu preferencia, vuelve pronto.\n");

    return 0;
}
