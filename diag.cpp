#include <stdio.h>
#include <conio.h>


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

int main(){
	char op;
	
	do{
		
	 printf("\n1- Capturar enteros\n");
	 printf("\n2- Cadena\n");
	 scanf("%c", &op);
	
	switch(op){
		
	case '1':
	
	 enteros();
	
	break;
	
	case 2:
		 
	
	break;	
	
	}
		
		
		
	fflush(stdin);
	}while (op != '0');
	
	
	
	return 0;
}
