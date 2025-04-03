#include <stdio.h>
#include <stdlib.h>

struct compu { 
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres) 
}typedef compu;

int main(){
    compu compu1, compu2, compu3, compu4, compu5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};
    int filaAleatorio = rand() % 6;
    int columnaAleatorio = rand() % 10;

    /* genero los datos aleatorios de compu 1 */
    compu1.velocidad = rand() % 3 + 1;
    compu1.anio = rand() % 11 + 2015;
    compu1.cantidad_nucleos = rand() % 9 + 1;
    compu1.tipo_cpu = &tipos[filaAleatorio][columnaAleatorio];

    printf("Velocidad: %d\n",compu1.velocidad);
    printf("Anio: %d\n",compu1.anio);
    printf("Cantidad de nucleos: %d\n",compu1.cantidad_nucleos);
    printf("Tipo cpu: %c\n",*compu1.tipo_cpu);

// for (int i = 0; i < 6; i++)
// {
//     for (int j = 0; j < 10; j++)
//     {
//         printf("arreglo[%d][%d]: %c\n",i,j,tipos[i][j]);

//     }
    
// }

    
}