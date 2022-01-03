#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct {

char modelo[20];
int numeroAgencia;
float precio;
int fechaFabricacion[4];

} cars;

void ordenarAutos (cars autos[]);
void cargarAutos (cars autos[]);
void mostrarAutos (cars autos[]);

int main()
{   cars autos[TAM];

    cargarAutos (autos);
    ordenarAutos (autos);
    mostrarAutos (autos);


return 0;
}

void cargarAutos (cars autos[])
{
    int i=1,j=1;
    srand(time(NULL));

    for (i=1; i<=TAM; i++)
    {
    printf("Ingrese Modelo (%i):\n", i);
    fflush (stdin);

    gets(autos[i].modelo);

    autos[i].numeroAgencia = 1 + rand()%100;
    autos[i].precio = 100000 + rand()%100001;

    for (j=1;j<=3;j++)
    {    if (j=1){
        (autos[i].fechaFabricacion[1])= 1+rand()%30;}
        if (j=2){
        (autos[i].fechaFabricacion[2])= 1+rand()%12;}
        if (j=3){
         (autos[i].fechaFabricacion[3])= 2000+rand()%22;}
    }
    }
return 0;
}

void mostrarAutos (cars autos[])
{
    int i=1;

    printf ("\n\nMODELO \t\t NUMERO AGENCIA \t PRECIO \t FECHA FABRICACION");
    for (i=1; i<=TAM; i++)
    {
    printf("\n\n %s \t\t\t",autos[i].modelo);
    printf ("%i \t\t",autos[i].numeroAgencia);
    printf ("%.2f \t\t", autos[i].precio);
    printf ("%i %i %i", autos[i].fechaFabricacion[1],autos[i].fechaFabricacion[2], autos[i].fechaFabricacion[3]);
    }
    printf ("\n\n");
return 0;
}

void ordenarAutos (cars autos[])
{int aux;

for (int i=1; i<=TAM; i++)
{   for (int j=1;j<=TAM;j++)
   {
     if (autos[j].numeroAgencia > autos[j+1].numeroAgencia)
     {
       aux=autos[j+1].numeroAgencia;
       autos[j+1].numeroAgencia=autos[j].numeroAgencia;
       autos[j].numeroAgencia=aux;
      }
    }
}
return 0;
}
