#include <iostream>
#include <cassert>
#include <string>
#include <cmath>
#include <conio.h>

using namespace std;

struct Color{
    unsigned rojo;
    unsigned verde;
    unsigned azul;
};

    Color sumarColor(const Color&, const Color&);
	Color mezclarColor(const Color&,const Color&);
	Color restarColor(const Color&, const Color&);
	Color getComplementario(const Color&);

int main(){
    Color rojo = {250,0,0};
    Color verde = {0,250,0};
    Color azul = {0,0,250};
    Color cyan = {0,255,255};
    Color magenta = {255,0,255};
    Color amarillo = {255,255,0};
    Color negro = {0,0,0};
    Color blanco ={255,255,255};


   // Color sumarColor(const Color& rojo, const Color& cyan);
    mezclarColor(magenta,blanco);
    sumarColor(azul, blanco);
    restarColor(verde, amarillo);
    getComplementario(cyan);

	assert (255 == getComplementario(cyan).rojo);
	assert (0 == getComplementario(cyan).verde);
	assert(0 == getComplementario(cyan).azul);
	
	assert(255 == sumarColor(azul,blanco).rojo);
	assert(255 == sumarColor(cyan, magenta).azul);
	assert(255 == mezclarColor(cyan,amarillo).verde);
	assert(0 == restarColor(negro,blanco).rojo);
	assert(0 == restarColor(negro,blanco).verde);

    return 0;
}

Color mezclarColor(const Color& color1,const Color& color2){

	Color nuevoColor;

	nuevoColor.rojo = ((color1.rojo + color2.rojo) / 2) >255 ? 255 : (color1.rojo + color2.rojo) / 2;
	nuevoColor.verde = ((color1.verde + color2.verde) / 2) >255 ? 255 : (color1.verde + color2.verde) / 2;
	nuevoColor.azul = ((color1.azul + color2.azul) / 2) > 255 ? 255 : (color1.azul + color2.azul) / 2; 	

	return nuevoColor;
}

Color sumarColor(const Color& color1, const Color& color2){
    Color nuevoColor;
    
    nuevoColor.rojo = (color1.rojo + color2.rojo) > 255 ? 255: color1.rojo + color2.rojo;
    nuevoColor.verde = (color1.verde+ color2.verde) > 255 ? 255 : color1.verde + color2.verde;
    nuevoColor.azul = (color1.azul + color2.azul)  > 255 ? 255 : color1.azul + color2.azul;
      
    return nuevoColor;  
}

Color restarColor(const Color& color1, const Color& color2){
	Color nuevoColor;
	int nuevoRojo = color1.rojo - color2.rojo;
	int nuevoVerde = color1.verde - color2.verde;
	int nuevoAzul = color1.azul - color2.azul;
	
	nuevoColor.rojo = (nuevoRojo) < 0 ? 0 : color1.rojo - color2.rojo;
	nuevoColor.verde = (nuevoVerde) < 0 ? 0 : color1.verde - color2.verde;
	nuevoColor.azul = (nuevoAzul) < 0 ? 0 : color1.azul - color2.azul ;
	
	return nuevoColor;
	
}

Color getComplementario(const Color& color1){
	Color nuevoColor;
	
	nuevoColor.rojo = 255 - color1.rojo;
	nuevoColor.verde = 255- color1.verde;
	nuevoColor.azul = 255 -color1.azul;
	
	return nuevoColor;		
}






