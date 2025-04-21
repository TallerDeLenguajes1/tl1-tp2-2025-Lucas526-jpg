#include <stdio.h>
#include <stdlib.h>

struct compu { 
    int velocidad; // Velocidad de procesamiento en GHz (valor entre 1 y 3) 
    int anio; // Año de fabricación (valor entre 2015 y 2024) 
    int cantidad_nucleos; // Cantidad de núcleos (valor entre 1 y 8) 
    char *tipo_cpu; // Tipo de procesador (apuntador a cadena de caracteres) 
}typedef compu;

void cargarDatos(compu *compu,char arre[][10]);

void guardarPcsArreglo(compu *pc1,compu *pc2,compu *pc3,compu *pc4,compu *pc5, compu pcs[]);

void listarPCs(compu pcs[], int cantidad);

void mostrarMasVieja(compu pcs[], int cantidad);

void mostrarMasVeloz(compu pcs[], int cantidad);

int main(){
    compu compu1, compu2, compu3, compu4, compu5, pcs[5];
    int cantidadPcs = 5;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core", "Pentium"};

    /* genero los datos aleatorios */
    cargarDatos(&compu1,tipos);
    cargarDatos(&compu2,tipos);
    cargarDatos(&compu3,tipos);
    cargarDatos(&compu4,tipos);
    cargarDatos(&compu5,tipos);

    //cargo el arreglo con las variables struc
    guardarPcsArreglo(&compu1,&compu2,&compu3,&compu4,&compu5,pcs);

    //muestro en pantalla
    listarPCs(pcs,cantidadPcs);

    //muestro la pc mas vieja
    mostrarMasVieja(pcs,cantidadPcs);

    //muestro la pc mas veloz
    mostrarMasVeloz(pcs,cantidadPcs);

    return 0;
}

void cargarDatos(compu *compu,char arre[][10]){
    compu->velocidad=1 + rand() % 3;
    compu->anio= 2015 + rand() % (2024-2015+1);
    compu->cantidad_nucleos=1 + rand() % 8;
    compu->tipo_cpu=arre[1 + rand() % 6];
}

void guardarPcsArreglo(compu *pc1,compu *pc2,compu *pc3,compu *pc4,compu *pc5, compu pcs[]){
    pcs[0]=*pc1;
    pcs[1]=*pc2;
    pcs[2]=*pc3;
    pcs[3]=*pc4;
    pcs[4]=*pc5;
}

void listarPCs(compu pcs[], int cantidad){
    for (int i = 0; i < cantidad; i++)
    {
        printf("Velocidad: %d GHz\n",pcs[i].velocidad);
        printf("Anio: %d\n",pcs[i].anio);
        printf("Cantidad de nucleos: %d\n",pcs[i].cantidad_nucleos);
        printf("Tipo cpu: %s\n",pcs[i].tipo_cpu);
        printf("\n");
    }
}

void mostrarMasVieja(compu pcs[], int cantidad){
    int j,antiguo=5000;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].anio < antiguo)
        {
            j=i;
            antiguo=pcs[i].anio;
        }
    }
    printf("La pc mas vieja tiene estas caracteristicas:\n");
    printf("Velocidad: %d GHz\n",pcs[j].velocidad);
    printf("Anio: %d\n",pcs[j].anio);
    printf("Cantidad de nucleos: %d\n",pcs[j].cantidad_nucleos);
    printf("Tipo cpu: %s\n",pcs[j].tipo_cpu);
    printf("\n");
}

void mostrarMasVeloz(compu pcs[], int cantidad){
    int j,velocidad=0;
    for (int i = 0; i < cantidad; i++)
    {
        if (pcs[i].velocidad > velocidad)
        {
            j=i;
            velocidad=pcs[i].velocidad;
        }
    }
    printf("La pc mas veloz tiene estas caracteristicas:\n");
    printf("Velocidad: %d GHz\n",pcs[j].velocidad);
    printf("Anio: %d\n",pcs[j].anio);
    printf("Cantidad de nucleos: %d\n",pcs[j].cantidad_nucleos);
    printf("Tipo cpu: %s\n",pcs[j].tipo_cpu);
    printf("\n");
}