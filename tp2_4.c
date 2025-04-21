#include <stdio.h>
#include <stdlib.h>

struct compu { 
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres) 
}typedef compu;

void cargarDatos(compu *compu,char arre[][10]);

int main(){
    compu compu1, compu2, compu3, compu4, compu5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    /* genero los datos aleatorios de compu 1 */
    cargarDatos(&compu1,tipos);

    //muestro en pantalla
    printf("Velocidad: %d\n",compu1.velocidad);
    printf("Anio: %d\n",compu1.anio);
    printf("Cantidad de nucleos: %d\n",compu1.cantidad_nucleos);
    printf("Tipo cpu: %s\n",compu1.tipo_cpu);
}

void cargarDatos(compu *compu,char arre[][10]){
    compu->velocidad=1 + rand() % 3;
    compu->anio= 2015 + rand() % (2024-2015+1);
    compu->cantidad_nucleos=1 + rand() % 8;
    compu->tipo_cpu=arre[1 + rand() % 6];
}