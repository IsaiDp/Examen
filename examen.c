#include <stdio.h>
#include <cs50.h>

int main(void) {
    // Solicitar el valor inicial y final del rango
    int inicio = get_int("Coloca el valor inicial del rango: ");
    int fin = get_int("Coloca el valor final del rango: ");

    // Validar que el valor inicial sea menor o igual al valor final
    while (inicio > fin) {
        printf("El valor inicial tiene que ser menor a el valor final, coloca un rango que cumpla con esto.\n");
        inicio = get_int("Ingrese el valor inicial del rango: ");
        fin = get_int("Ingrese el valor final del rango: ");
    }

    // Elegir la opcion
    int opcion = get_int("\nElija una opción:\n1. Mostrar los números pares y calcular su suma.\n2. Mostrar los números impares y calcular su suma.\n3. Mostrar tanto los números pares como los impares, con sus respectivas sumas.\n\nOpción: ");

    // Funcion para mostrar los numeros que son pares y calcular la suma de cada una de ellas
    if (opcion == 1) {
        int sumaPares = 0;
        printf("Números pares en el rango:\n");
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 == 0) { // Este es para en caso de no cumplir las condiciones colocar esto
                printf("%i \n", i);
                sumaPares += i;
            }
        }
        printf("\nSuma de los números pares: %i\n", sumaPares);
    }pwd

    // Funcion para mostrar los numeros que son pares y calcular la suma de cada una de ellas
    else if (opcion == 2) {
        int sumaImpares = 0;
        printf("Números impares en el rango:\n");
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 != 0) { // Si el número es impar
                printf("%i \n", i);
                sumaImpares += i;
            }
        }
        printf("\nSuma de los números impares: %i\n", sumaImpares);
    }
    // Si elige mostrar tanto los números pares como los impares y sus sumas
    else if (opcion == 3) {
        int sumaPares = 0, sumaImpares = 0;

        printf("Números pares en el rango:\n");
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 == 0) { // Si el número es par
                printf("%i \n", i);
                sumaPares += i;
            }
        }
        printf("\nSuma de los números pares: %i\n", sumaPares);

        printf("Números impares en el rango:\n");
        for (int i = inicio; i <= fin; i++) {
            if (i % 2 != 0) { // Si el número es impar
                printf("%i \n", i);
                sumaImpares += i;
            }
        }
        printf("\nSuma de los números impares: %i\n", sumaImpares);
    }
    else {
        printf("Opción no válida.\n");
    }

    return 0;
}

