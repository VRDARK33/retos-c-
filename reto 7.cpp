/*reto 7
Crear�s un un script para el que el usuario indicar� un n�mero entre 1 y 6. 
Como respuesta se le brindar� un mensaje seg�n el n�mero leido:
1 - �Hoy aprenderemos sobre prorgamaci�n�
2 - ��Qu� tal tomar un curso de marketing digital?
3 - �Hoy es un gran d�a para comenzar a aprender de dise�o�
4 - �Y si aprendemos algo de negocios online?
5 - �Veamos un par de clases sobre producci�n audiovisual�
6 - �Tal vez sea bueno desarrollar una habilidad blanda en Platzi�
En caso indicar un n�mero distinto, pedir al usuario que ingrese uno en el rango v�lido.*/

#include<iostream>
#include<conio.h>
using namespace std;


void mensaje(){
	int n;
	cout<<"ingrese un numero del 1 al 6: "; cin>>n;
	
	if(n>=1 and n<=7){
		switch(n){
			case 1: printf("1 - Hoy aprenderemos sobre prorgamaci�n"); break;
			case 2: printf("2 - �Qu� tal tomar un curso de marketing digital"); break;
			case 3: printf("3 - Hoy es un gran d�a para comenzar a aprender de dise�o"); break;
			case 4: printf("4 - �Y si aprendemos algo de negocios online?"); break;
			case 5: printf("5 - Veamos un par de clases sobre producci�n audiovisual"); break;
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
