/*reto 3
Nuevamente pide a tu usuario que indique 3 n�meros: un l�mite superior, 
un l�mite inferior y uno de comparaci�n. Si el n�mero de comparaci�n se encuentra entre los 2 primeros, comunicarlo en pantalla. 
En caso estar por debajo del l�mite inferior o por arriba del l�mite superior, tambi�n mostrarlo en pantalla.*/

#include<stdio.h>
#include<conio.h>

int RangosCambiados(){
	int x, y, z;
	
	printf("ingrese un rango inferior y uno superior: "); scanf("%d %d",&x,&y);
	
	printf("ingrese un numero: "); scanf("%d",&z);
	
	if((x<z) and (z<y)){
		printf("esta dentro del rango ");
	}else if((x<z) and (z>y)){
		printf("esta por arriba del rango");
	}else{
		printf("esta por debajo del rango ");
	}
}

int main(){
	
	RangosCambiados();
	getch();
}


