/*reto 2
Pide al usuario que indique 2 números: uno que servirá como límite y otro para comparar. 
Si el segundo número es menor al primero, mostrarás un mensaje diciendo
“El número ‘x’ se encuentra en el rango, gracias” y en caso contrario dirá “El número ‘x’ excede el límite permitido”.*/

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
