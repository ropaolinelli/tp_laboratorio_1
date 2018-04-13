#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "funciones.C"
int main()
{
    int flagA=0,flagB=0;
    char seguir='s';
    int opcion=0;
    float A, B;

    while(seguir=='s')
    {

        printf("\nIngrese un numero de opcion \n\n");
        printf("1- Ingresar 1er numero \n");
        printf("2- Ingresar 2do numero \n");
        printf("3- Calcular la suma (A+B)\n");
        printf("4- Calcular la resta (A-B)\n");
        printf("5- Calcular la division (A/B)\n");
        printf("6- Calcular la multiplicacion (A*B)\n");
        printf("7- Calcular el factorial (A!)\n");
        printf("8- Calcular todas las operacione\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                //se ingesa numero 1
                A=IngresarNumero('A');
                flagA=1;
                break;
            case 2:
                //se ingresa numero 2
                B=IngresarNumero('B');
                flagA=1;
                break;
            case 3:
                //se suman ambos numeros
                Sumar(A,B);
                break;
            case 4:
                //se restan ambos numeros
                Restar(A,B);
                break;
            case 5:
                //se dividen ambos numeros
                Dividir(A,B);
                break;
            case 6:
                //se multiplican ambos numeros
                Multiplicacion(A,B);
                break;
            case 7:
            //se muestra el factor
             if(flagA==0)
                {
                    printf("No se puede realizar una operacion ya que no hay valores cargados.");
                }
                else
                {
                    Factorial(A);
                }
                break;
            case 8:
                //se muestran todas las operaciones
                MostrarTodo(A,B);
                break;
            case 9:
                seguir = 'n';
                break;
            default:
                printf("Error. Ingrese una opcion valida (1-9) ");
                break;

        }



    }
return 0;

}



