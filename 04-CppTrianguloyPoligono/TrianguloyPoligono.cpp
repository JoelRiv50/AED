/*
Programa: Triangulo y Poligono
Objetivo: realizar los prototipos de tranigulo y poligono
Autor: Joel Rivero Torrez
Ultima modificación: 11/06/2020  
*/

#include <iostream>>
#include <array>
#include<string>

 using namespace std;
 
 int main() {
 	struct punto{
 		double x;
		double y;
 		
 	}
 	
 	struct triangulo{
 		array<punto,3> puntosTriangulo;
 		string colorTriangulo;
 	};
 	
 	struct poligono{
 		array<punto,20> puntosPoligono;
 		unsinged cantPuntos;
 		string colorPoligono;
 	};
 	
 	
 	
 	struct getTriangulo(const triangulo&);
 	struct getPuntoTriangulo(const triangulo&, punto unPunto); //devulve los triangulo que tienen el punto unPunto 	
 	struct getColorTriangulo(const triangulo&, string unColor); //devulve los triangulo que tienen el color unColor
 	void cambiarPuntoTranigulo(triangulo&, punto unPunto); //cambio el punto del triangulo al punto pasado por parametro
	void cambiarColorTriangulo(triangulo&, string unColor); //cambia el color del triangulo al color pasado pro parametro
	
	
	struct getPoligono(const poligono&);
	struct getPuntoPoligono(const poligono&, punto unPunto); //devulve los poligonos que tienen el punto unPunto 	
	struct getColorPoligono(const poligono&, string color); //devulve los poligonos que tienen el color unColor
	void cambiarPuntoPoligono(poligono&, punto unPunto); //cambio el punto del poligono al punto pasado por parametro
	void cambiarColorPoligono(poligono&, string color); //cambia el color del poligono al color pasado pro parametro
	
	
	
 	
 }
