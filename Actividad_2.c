#include<stdio.h>
#include<conio.h>
#include<string.h>

void mostrar(int n, char arreglo[]);
void capturar();
int n;

struct Personaje{
    char nombre[15], tipo[15];
    int fuerza, salud;
}personaje[5];

void capturar()
{
    for(int j=1;j<=5;j++)
    {
        printf("\nIntroduce el nombre del personaje numero %d: ", j);
        scanf("\n%s",&personaje[j].nombre[15]);
        printf("\nIntroduce su tipo: ");
        scanf("\n%s",&personaje[j].tipo[15]);
        printf("\nIntroduce sus puntos de salud: ");
        scanf("\n%d",&personaje[j].salud);
        printf("\nIntroduce sus puntos de fuerza: ");
        scanf("\n%d",&personaje[j].fuerza);
    }
}

void mostrar(int n, char arreglo[])
{
    printf("\nImprimiendo...");
    for(int h=1; h<=n; h++)
    {
        printf("\n");
        printf("\t%c",arreglo[0]);
        printf("\t%c",arreglo[1]);
        printf("\t%c",arreglo[2]);
        printf("\t%c\n",arreglo[3]);
    }
}

int main(){
    int arreglo1[5], i;
    char arreglo[]="Hola";
    float suma=0, promedio;
    printf("\n1.-");
    printf("\nIntroduce 5 numeros enteros\n");
    for(i=1;i<=5;i++)
    {
        scanf("%d", &arreglo1[i]);
        suma=suma+arreglo1[i];
    }
    printf("\nEste es tu vector");
    for(i=1;i<=5;i++)
    {
        printf("\t%d",arreglo1[i]);
    }
    printf("\nEsta es la suma de los numeros ingresados: %.0f\n",suma);
    promedio=suma/5;
    printf("El promedio es: %.1f",promedio);
    printf("\nPresione<enter>para continuar a la segunda parte");
    getch();
    printf("\n2.-");
    printf("\nIntroduce el numero de veces que quieres ver el mensaje: ");
    fflush(stdin);
    scanf("%d",&n);
    mostrar(n, arreglo);
    printf("\nPresione<enter>para continuar a la tercera parte");
    getch();
    printf("\n3.-");
    capturar();
}