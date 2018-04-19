/* el siguiente algoritmo tiene como finalidad mostrar todos los numeros primeros que tiene un numero ingresado por el usuario
*para iniciar tenemos que ingresar un numero
luego este entrara a un ciclo en el cual ira mostrando los numeros primos menores al numero que ingresaste
hasta llegar al numero ingresado o hasta su primo anterior.
*/
#include <stdio.h>

int main(){
    int n1;
    printf("Escriba un numero para calcular cuantos N° primeros posee \n");
    scanf("%d",&n1);
    for (int c=2;c<=n1;c++){
    int a=0;
    for(int r=1;r<=n1;r++)
    {
        if(c%r==0)
            a++;
    }
if (a==2){
 printf("%d\n", c);
 }
 }
 return 0;
}
