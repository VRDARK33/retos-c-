/*Crea un programa que pregunte al usuario si está lloviendo, en caso de responder “sí” 
pregunta si está haciendo mucho viento y si responde “sí” nuevamente muestra un mensaje
indicando que hace mucho viento para salir con una sombrilla. En caso contrario,
anima al usuario a que lleve una sombrilla. Para el caso de responder “no” en la primer pregunta,
entonces solo desea un bonito día.
Considera que las respuestas pueden pasarse a minúsculas para evitar posibles errores.*/

#include<iostream>
#include<conio.h>
#include<string>
#include<algorithm>
using namespace std; 

void Clima(){
	string x;
	
	cout<<"esta lloviendo? "; cin>>x; 
	transform(x.begin(),x.end(),x.begin(),::tolower);
	if(x == "si"){
		cout<<"esta haciendo mucho viento? "; cin>>x;
		transform(x.begin(),x.end(),x.begin(),::tolower);
		if(x == "si"){
			cout<<"hace mucho viento para salir con una sombrilla.";
		}else{
			cout<<"lleve una sombrilla.";
		}
	}else{
		cout<<"bonito dia";
	}
	
	
}


int main(){
	
	Clima();
	getch();
}
