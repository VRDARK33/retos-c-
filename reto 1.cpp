/*reto #1
Escribe un programa que pida al usuario 2 números, mostrando como salida cuál es el número mayor y 
la diferencia de uno respecto al otro. 
En caso de que los números sean iguales, mostrarlo también en pantalla.*/
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
