/*reto 6
Pide al usuario que ingrese su edad y mostrarás un mensaje correspondiente si esta coincide con las siguientes condiciones:
Más de 30 años: Nunca es tarde para aprender ¿Qué curso tomaremos?
Entre 29 y 18 años: Es un momento excelente para impulsar tu carrera.
Menos de 18 años: ¿Sabes hacia dónde dirigir tu futuro? Seguro puedo ayudarte.*/

#include<stdio.h>
#include<conio.h>

void edad(){
	int age;
	
	printf("ingrese la edad: "); scanf("%d", &age);
	
	if(age < 18){
		printf("¿Sabes hacia dónde dirigir tu futuro? Seguro puedo ayudarte.");
	}else if(age >= 18 and age <= 30){
		printf("Es un momento excelente para impulsar tu carrera.");
	}else if(age > 30){
		printf("Nunca es tarde para aprender ¿Qué curso tomaremos?");
	}
}

int main(){
	edad();
	getch();
}
