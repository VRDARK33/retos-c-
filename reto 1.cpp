/*reto #1
Escribe un programa que pida al usuario 2 n�meros, mostrando como salida cu�l es el n�mero mayor y 
la diferencia de uno respecto al otro. 
En caso de que los n�meros sean iguales, mostrarlo tambi�n en pantalla.*/
#include<stdio.h>
#include<conio.h>

int Mayor(){
	int x, y;
	printf("ingrese el primer numero: "); scanf("%d",&x);
	printf("ingrese el segundo numero: "); scanf("%d",&y);
	
	if(x>y){
		printf("el %d es mayor que %d y tiene una diferencia de %d",x,y,x-y);
	}else if(x<y){
		printf("el %d es mayor que %d y tiene una diferencia de %d",y,x,y-x);
	}else{
		printf("los numeros son iguales");
	}
	
}

int main(){
	Mayor();
	getch();
}
