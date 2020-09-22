#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
    int arreglo1[5], i;
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
}