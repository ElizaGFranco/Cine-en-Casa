#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, opcion;

    do
    {
        printf("Bienvenidos a CineEnCasa\n");
        printf("1.- Clasificacion de la pelicula\n");
        printf("2.- Seleccionar la pelicula\n");
        printf("3.- Consultar horarios\n");
        printf("4.- Disponibilidad de sala\n"); 
		printf("5.- Comprar boletos\n");
        printf("6.- Descuentos\n");
        printf("7.- Dulceria\n");
        printf("8.- Imprimir ticket\n");
        printf("9.- Compra-Renta peliculas\n");
        printf("10.-Reistrarse\n");
		printf("11.- Salir");
        printf( "\n\n   Introduzca opcion (1-11): " );

        scanf( "%d", &opcion );

        /* Inicio del arbol*/

        switch ( opcion )
        {
            case 1: printf( "\n Las Clasificaciones son: ");
                    printf( "\n AA,A,B,B15,C,D \n");
                    break;

            case 2: printf( "\n Las peliculas son : ");
                    printf( "\n La era de hielo,Blanca Nieves,Rapidos y Furiosos,Mision imposile,Dragon Ball Z,El conjuro,El regreso del demonio,\n");
                    break;

            case 3: printf( "\n Los horario son: ");
                    printf( "\n 12,1,2,3,4,5,6,7,8,9\n");
                    break;
         
		    case 4: printf( "\n Las salas disponibles son: ");
                    printf( "\n 1,3,4,6,8,9\n");
                    break;

            case 5: printf( "\n Desea comprar los boletos para la pelicula: ");
                    printf( "\n Si,No\n");
                    break;

            case 6: printf( "\n Los descuentos son: ");
                    printf( "\n Palomitas grandes 50%,Refrescos grande 2x1,Nachos grandes 30%,Hot dogs 3x2 \n");
		 
	    	case 7: printf( "\n Contamos en la dulceria con: ");
                    printf( "\n Chocolates $15,Gomitas $20,Paletas $10,Manguitos $25\n");
                    break;

            case 8: printf( "\n Desea imprimir su ticket : ");
                    printf( "\n Si-No\n");
                    break;

            case 9: printf( "\n Desea comprar o rentar peliculas: ");
                    printf( "\n Si-No\n");
                    break;
                    
            case 10: printf( "\n Introducir datos para poder registrarse:");        
		             printf( "\n Nombre,Correo,Num.de tarjeta cliente Cine en casa");
		  
		   }

         /* Fin del anidamiento */

    } while ( opcion != 11 );

    return 0;
}



