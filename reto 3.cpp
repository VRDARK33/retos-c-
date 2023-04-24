/*reto 3
Nuevamente pide a tu usuario que indique 3 números: un límite superior, 
un límite inferior y uno de comparación. Si el número de comparación se encuentra entre los 2 primeros, comunicarlo en pantalla. 
En caso estar por debajo del límite inferior o por arriba del límite superior, también mostrarlo en pantalla.*/

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


