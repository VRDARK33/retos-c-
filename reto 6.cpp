/*reto 6
Pide al usuario que ingrese su edad y mostrar�s un mensaje correspondiente si esta coincide con las siguientes condiciones:
M�s de 30 a�os: Nunca es tarde para aprender �Qu� curso tomaremos?
Entre 29 y 18 a�os: Es un momento excelente para impulsar tu carrera.
Menos de 18 a�os: �Sabes hacia d�nde dirigir tu futuro? Seguro puedo ayudarte.*/

#include<stdio.h>
#include<conio.h>

void edad(){
	int age;
	
	printf("ingrese la edad: "); scanf("%d", &age);
	
	if(age < 18){
		printf("�Sabes hacia d�nde dirigir tu futuro? Seguro puedo ayudarte.");
	}else if(age >= 18 and age <= 30){
		printf("Es un momento excelente para impulsar tu carrera.");
	}else if(age > 30){
		printf("Nunca es tarde para aprender �Qu� curso tomaremos?");
	}
}

int main(){
	edad();
	getch();
}
