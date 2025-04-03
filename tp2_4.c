#include <stdio.h>

struct compu { 
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres) 
}typedef compu;

int main(){
    compu compu1, compu2, compu3, compu4, compu5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
{
    /* genero los datos aleatorios de compu 1 */
    compu1.velocidad = 1 + rand() % 4;
    compu1.anio = 2015 + rand() % 2025;
    compu1.cantidad_nucleos = 1 + rand() % 9;

};

}