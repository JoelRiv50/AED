/*
Programa: Ejemplo de tipos de datos
Objetivo: Ejemplificar el uso de los tipos de datos
Autor: Joel Rivero Torrez
Ultima modificación: 21/05/2020  
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
	
	string frase = "Esto es solo una prueba para determinar posibles resultados";
	char a = 'a';
	int cantidad = 0; 
	
	
	for(int i = 0; i<59; i++){
		if(frase[i] ==  a )
		{
			cantidad++;			
		}
	}
	cout<<"Cantidad de letras 'A': "<<cantidad <<"\n\n";
	
	
	double dividendo = -7.1;
	unsigned int divisor = 8;
	double resultado = dividendo / divisor;
	bool comprobacion = false;
	
	if(resultado = 0.8875){
		comprobacion = true;
	}
	
	if(comprobacion = true){
		cout<< "El resultado de la division entre " << dividendo << " y "<< divisor <<" es correcto";
	}
	else{
		cout<< "El resultado de la division entre " << dividendo << "y "<< divisor <<"es incorrecto";
	}
	
	
	
	
	
	
	
}
