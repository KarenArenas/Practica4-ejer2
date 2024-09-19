#include <stdio.h>

int main() {
    int horas, minutos;

    // Bucle para recorrer las 24 horas
    for (horas = 0; horas < 24; horas++) {
        // Bucle para recorrer los 60 minutos de cada hora
        for (minutos = 0; minutos < 60; minutos++) {
            // Mostrar las horas y minutos con formato HH:MM
            printf("%02d:%02d\n", horas, minutos);
        }
    }

    return 0;
}
