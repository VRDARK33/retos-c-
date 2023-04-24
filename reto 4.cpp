/*reto 4
Escribe un programa que pida al usuario ingrese su animal favorito, 
si coloca ‘Tortuga’, ‘tortuga’, ‘TORTUGA’ o 
cualquier otra variante de la palabra entonces mostrar en pantalla “También me gustan las tortugas”. 
En caso contrario mostrar el mensaje “Ese animal es genial, 
pero prefiero las tortugas”.*/

#include<stdio.h>
#include<conio.h>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;

void Tortugas(){
	string x;
	
	printf("ingrese su animal favorito: "); cin>>x;
	/*esta funcion sirve para convertir un string todo totalmente en este caso a minusculas 
	los dos primeros argumentos : x.begin() x.end() sirven para especificar el rango de la transformacion 
	y el tercer argumento es para la direccion del contenedor es decir donde se va guardar x.begin()*/
	transform(x.begin(),x.end(),x.begin(),::tolower);
	if(x=="tortuga"){
		printf("tambien me gustan las tortugas");
	}else{
		printf("prefiero las tortugas ");
	}
	
}

int main(){
	Tortugas();
	getch();
}
