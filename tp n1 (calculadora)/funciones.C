#include<stdio.h>
#include<stdlib.h>
#include "funciones.h"

 float IngresarNumero(char var)
{
    float numero;
    printf("Ingrese un numero %c\n",var);
    scanf("%f",&numero);
    return numero;
}

float Sumar(float x ,float y )
{
    float resultado=x+y;
    printf("La suma es: %.2f \n", resultado);
    return resultado;
}

float Restar(float x  , float y )
{
    float resultado=x-y;
    printf("La resta es: %.2f \n", resultado);
    return resultado;
}

float Dividir(float x, float y)
{
    float resultado;
    if(y==0)
    {
    printf("Error. No es posible dividir un numero por 0 ");
    return 0;
    }
    else
    {
    resultado=x/y;
    printf("La division es: %.2f \n", resultado);
    return resultado;
    }
}

float Multiplicacion(float x, float y)
{
    float resultado=x*y;
    printf("La multiplicacion es: %.2f \n", resultado);
    return resultado;
}

int Factorial(int x)
{
    int fac=(int)x;
    int factorial=1;
    if(x<0)
    {

    printf("No se puede sacar factorial de un numero negativo y no se puede poner un decimal.");

    }
    else if(x!=fac)
    {
        printf("No se puede hacer el factorial de un numero decimal");
    }
    else
    {
        for(int i=1; i<=(int)x; i++)
        {
            factorial *= i;
        }
         printf("El factorial de A es: %d \n",factorial);

    }
    return factorial;
}

float MostrarTodo(float x,float y)
{
    Sumar(x,y);
    Restar(x,y);
    Dividir(x,y);
    Multiplicacion(x,y);
    Factorial(x);
}


