#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void imc ( float *peso, float *altura, float *imcCal)
{

    float guardAltura, guardPeso;

    guardAltura = *altura;
    guardPeso = *peso;


    *imcCal = guardPeso/(guardAltura * guardAltura);


    return;

}


void impressao (float *imcCal)
{


    float altura, peso;


    if(*imcCal < 18.5)
    {
        printf("ABAIXO DO PESO \n");
    }
    else if(*imcCal>18.5 && *imcCal< 24.9)
    {
        printf("PESO NORMAL \n");
    }
    else if(*imcCal >25 && *imcCal <29.9)
    {
        printf("SOBREPESO \n");
    }
    else if(*imcCal >30 && *imcCal <34.9)
    {
        printf("OBESIDADE GRAU 1\n");
    }
    else if(*imcCal >35 && *imcCal <39.9)
    {
        printf("OBESIDADE GRAU 2 \n");
    }
    else
    {
        printf("OBESIDADE GRAU 3 \n");
    }

}

int main()
{



    float altura, peso, calculo, imcCal;
    int opcao;

    printf("\t\t\n Escolha uma opcao\n");
    printf("0. Sair\n");
    printf("1. Descobrir o imc\n");

    printf("Opcao: ");
    scanf("%d", &opcao);


    if (opcao == 0)
    {
        exit(0);
    }

    else if (opcao == 1)
    {

        printf("Altura: \n");
        scanf(" %f", &altura);

        printf("Peso:\n");
        scanf(" %f", &peso);


        imc(&peso, &altura, &imcCal);
        printf("Seu imc: %.1f \n", imcCal);
        impressao(&imcCal);


    }
}

