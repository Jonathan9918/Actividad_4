#include<stdio.h>
#include<conio.h>
#include<string.h>

void mostrar(int n, char arreglo[]);
void capturar();
int n;

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
}