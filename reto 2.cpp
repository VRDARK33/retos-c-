/*reto 2
Pide al usuario que indique 2 n�meros: uno que servir� como l�mite y otro para comparar. 
Si el segundo n�mero es menor al primero, mostrar�s un mensaje diciendo
�El n�mero �x� se encuentra en el rango, gracias� y en caso contrario dir� �El n�mero �x� excede el l�mite permitido�.*/

#include<stdio.h>
#include<conio.h>

int Rango(){
	int x, y;
	
	printf("ingrese el limite del rango: "); scanf("%d",&x);
	printf("ingrese un numero: "); scanf("%d",&y);
	
	if(x>y){
		printf("El numero %d se encuentra en el rango, gracias",y);
		
	}else{
		printf("El numero %d excede el limite permitido",y);
	}
	
}

int main(){
	Rango();
	getch();
}
