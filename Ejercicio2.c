/*El programa cuenta con que tenemos que ingresar un numero del 1 al 9
*si ingresamos un valor que no esta entre esos parametros, el programa se cerrará, como lo dice el primer IF del algoritmo.
*si se ingresa un numero correcto entrara a un ciclo en el cual ira imprimiendo los numeros hasta el valor ingresado, despues hara lo
mismo pero los imprimira al reves.
finalmente mostrara todo los numeros en la pantalla
*/
#include <stdio.h>
int main(){
    int m,i,c,r,b;
    printf("Ingrese un numero del 1 al 9 \n");
    scanf("%d",&m);
     if (m>9 || m<1){
        printf ("debe ingresar numero entre 1 al 9");
     }
     else {
        for (i=1; i<=m; i++){
            for (c=1; c<=i; c++){
                printf("%d",c);
            }
            for(r=i-1;r>=1; r--){
                printf("%d",r);
            }
            printf("\n");
        }
     }
     return 0;
}



