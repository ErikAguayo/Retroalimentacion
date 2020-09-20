#ifndef PERSONAJE_H
#define PERSONAJE_H
#include <stdio.h>

struct personaje{
	
	char nombre[20];
    char tipo[20];
    float fuerza;
    int salud;
} per[5];




void capturar(){
	int n=0;
	
	printf("\nCuantos personajes quieres capturar (Max 5): \n");
	scanf("%i", &n);
	while(n<=5)
	{ 
	    
		printf("\n\nCaptura los datos del personaje: \n");
		printf("\nNombre: ");
		
        scanf("%s", per[n].nombre);
        printf("Tipo: ");
        
        scanf("%s", per[n].tipo);
        fflush(stdin);
        printf("Fuerza: ");
        scanf("%f", &per[n].fuerza);
       

        printf("Salud: ");
        scanf("%i", &per[n].salud);
        
		n++;
		
	}
	

	
}
#endif
