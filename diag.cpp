#include <stdio.h>
#include <conio.h>
#include "per.h"
#include "ramauno.h"


void enteros(){
	int ent[5];
	int sum=0, i;
    
	float prom;
	
	
	
	for(i=0; i<5; i++){
		 
	
		
		printf("Dame un entero:");
		
		scanf("%d", &ent[i]);
		printf("\n");
	}
	for(i=0; i<5; i++){
		
		
		printf("Estos son tus enteros: %d\n", ent[i] );
	}
	for(i=0; i<5; i++){
		
		sum=sum+ent[i];
	}
	printf("\nLa suma de los enteros es: %d\n", sum);
	
	prom=sum/5;
	
	printf("\nEl promedio es: %f\n", prom);
}

    void cadena(int c, char regis[]){
    	int i;
		for(i=0; i<c; i++){
			
			printf("\n%s", regis);
			
		}
	}

int main(){
	char regis[30];
	int c;
	char op;
	
	do{
		
	 printf("\n\n1- Capturar enteros\n");
	 printf("\n2- Cadena de caracteres que se repiten n veces\n");
	 printf("\n3- Capturar personajes\n");
	 printf("\n4- Suma de 2 numeros\n");
	 printf("\n0- Salir\n");
	 printf("\n\nElige una opcion: ");
	 scanf("%c", &op);
	
	switch(op){
		
	case '1':
	
	 enteros();
	
	break;
	
	case '2':
		 
	 printf("\nEscribe una cadena de caracteres: ");
	 fflush(stdin);
	 fgets(regis, sizeof(regis), stdin);
	 printf("Cuantas veces quieres que se repita: ");
	 scanf("%i", &c);
	 cadena(c, regis);
	
	break;	
	
	case '3':
		
		capturar();
		
    break;
    
    case '4':
		
		suma();
		
    break;
	
	}
		
		
		
	fflush(stdin);
	}while (op != '0');
	
	
	
	return 0;
}
//https://github.com/ErikAguayo/Retroalimentacion.git
