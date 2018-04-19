/* El algoritmo parte por el el saludo de bienvenido
*luego le pide el peso en valores entero de la persona
*acto seguido, este calcula la cantidad de miligramos que necesita por dia
*este muestra el resutlado en pantalla
*despues transforma los miligramos a mililitros
*finalmente calcula la cantidad de gotas por mililitros dividiendolo en las 3 dosis diarias
*final del programa.
*/
#include <stdio.h>
int main()
{
    int ps,mg=25;
    float ds,gota,dr;
    printf("Bienvenido al programa para calcular dosis de medicamentos \n");
    printf("Ingrese el peso de la persona expresado en numero entero \n");
    scanf("%d",&ps);
    ds= (ps*0.2);
    printf("la cantidad de miligramos que le corresponden es: %f", ds);
    printf("\n");
    dr=(100*ds)/500;
    gota=(dr*mg)/3;
    printf("la cantidad de gotas que se le tiene que administrar 3 veces al dia son de: %f", gota);
    printf("\n");

    return 0;
}
