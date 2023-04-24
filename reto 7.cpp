/*reto 7
Crearás un un script para el que el usuario indicará un número entre 1 y 6. 
Como respuesta se le brindará un mensaje según el número leido:
1 - “Hoy aprenderemos sobre prorgamación”
2 - “¿Qué tal tomar un curso de marketing digital?
3 - “Hoy es un gran día para comenzar a aprender de diseño”
4 - ¿Y si aprendemos algo de negocios online?
5 - “Veamos un par de clases sobre producción audiovisual”
6 - “Tal vez sea bueno desarrollar una habilidad blanda en Platzi”
En caso indicar un número distinto, pedir al usuario que ingrese uno en el rango válido.*/

#include<iostream>
#include<conio.h>
using namespace std;


void mensaje(){
	int n;
	cout<<"ingrese un numero del 1 al 6: "; cin>>n;
	
	if(n>=1 and n<=7){
		switch(n){
			case 1: printf("1 - Hoy aprenderemos sobre prorgamación"); break;
			case 2: printf("2 - ¿Qué tal tomar un curso de marketing digital"); break;
			case 3: printf("3 - Hoy es un gran día para comenzar a aprender de diseño"); break;
			case 4: printf("4 - ¿Y si aprendemos algo de negocios online?"); break;
			case 5: printf("5 - Veamos un par de clases sobre producción audiovisual"); break;
			case 6: printf("6 - Tal vez sea bueno desarrollar una habilidad blanda en Platzi"); break;
			
		}
	}else{
		mensaje();
	}
	
}

int main(){
	mensaje();
	getch();
}
