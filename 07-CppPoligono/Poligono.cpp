#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

    struct Color {
		unsigned rojo;
		unsigned verde;
		unsigned azul;
	};

	struct Punto{
 		double x;
		double y;

 	};

 	struct Poligono{
 	    unsigned cantPuntos;
 	    Color colorPoligono;
 		Punto puntosPoligono[];
 		
 	};


    void AddVertice (Poligono&, Punto);
    Punto getVertice (Poligono&, unsigned);
    void setVertice(Poligono&, unsigned, Punto);
    void eliminarVertice(Poligono&, unsigned);
    unsigned getCantidadLados(Poligono);
    

int main ()
{
    Poligono unPoligono;
    Punto nuevoPunto;
    
    unsigned getPosicion = 2;
	unsigned setPosicion = 1;
	unsigned eliminarPosicion = 2;
	
 
    unPoligono.cantPuntos = 3;
    unPoligono.colorPoligono.rojo = 255;
    unPoligono.colorPoligono.verde = 0;
    unPoligono.colorPoligono.azul= 0;

    unPoligono.puntosPoligono[0].x = 1;
    unPoligono.puntosPoligono[0].y = 1;
    unPoligono.puntosPoligono[1].x = -1;
    unPoligono.puntosPoligono[1].y = 1;
    unPoligono.puntosPoligono[2].x = 0;
    unPoligono.puntosPoligono[2].y = 3;

    nuevoPunto.x= 4;
    nuevoPunto.y = 6;

    AddVertice (unPoligono, nuevoPunto);
	getVertice (unPoligono, getPosicion);
	setVertice (unPoligono, setPosicion, nuevoPunto);
	eliminarVertice(unPoligono, eliminarPosicion);
	
	
	assert (4 == unPoligono.puntosPoligono[2].x);
    assert (-1 == (getVertice (unPoligono, getPosicion)).x );
    assert (1 == (getVertice (unPoligono, 1)).y );
    assert (3 == getCantidadLados (unPoligono));
		
//	cout << unColor.rojo;
//	cout <<unPoligono.colorPoligono.rojo;
    return 0;
}

void AddVertice (Poligono &poligono, Punto unPunto)
{
    poligono.puntosPoligono[poligono.cantPuntos].x = unPunto.x;
    poligono.puntosPoligono[poligono.cantPuntos].y = unPunto.y;
}

Punto getVertice (Poligono &poligono, unsigned p){
    return poligono.puntosPoligono[p-1];
}

void setVertice (Poligono &poligono, unsigned p, Punto nuevoPunto){
	poligono.cantPuntos = poligono.cantPuntos+1;
	
	poligono.puntosPoligono[p-1].x = nuevoPunto.x;
	poligono.puntosPoligono[p-1].y = nuevoPunto.y;
}

unsigned getCantidadLados(Poligono poligono){
	return poligono.cantPuntos;
}

void eliminarVertice(Poligono &poligono, unsigned posicion){

	poligono.cantPuntos = poligono.cantPuntos-1;			
	
	poligono.puntosPoligono[posicion-1].x = poligono.puntosPoligono[2].x;
	poligono.puntosPoligono[posicion-1].y = poligono.puntosPoligono[2].y;
	
	poligono.puntosPoligono[2].x = poligono.puntosPoligono[3].x;
	poligono.puntosPoligono[2].y = poligono.puntosPoligono[3].y;
	
	poligono.puntosPoligono[3].x = 0;
	poligono.puntosPoligono[3].y = 0;
	
}



    



