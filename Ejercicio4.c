/*El Algoritmo parte por darle la bienvenida al receptor
*nos pedira los resultados de las 5 fechas
*tendremos que anotar los goles que marcó el equipo LOCAL(Equipo NUESTRO) y el equipo VISITANTE
*con la ayuda de un IF se ven si los goles de local son mayor a los de la visita sumando 3 puntos
*en caso de empate se da un punto
*al final se muestra en pantalla la cantidad de puntos obtenido en las cinco fechas
*/

#include <stdio.h>
int main()
{
    int pts=0,golesl,golesv, i;
    printf("Bienvenido al contador de puntos");
    printf("\n");
    printf("Auspiciado por el equipo de Futbol Los Gloriosos");
    printf("\n");
    for (i=0; i<5;i++){
        printf("Partido %d\n", i+1);
        printf("Ingrese los Goles que Anoto SU Equipo:");
        scanf("%d",&golesl);
        printf("Ingrese los goles del equipo RIVAL:");
        scanf("%d",&golesv);
        if (golesl > golesv){
            pts = pts + 3;
        }
        else if (golesv == golesl){
            pts++;
        }
    }
    printf("la cantidad de puntos en las 5 fechas son: %d",pts);

    return 0;

}
