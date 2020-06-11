/*
Programa: Presedencia de operadores
Objetivo:Demostrar el uso de operadores booleanos y expresiones complejas
Autor: Joel Rivero Torrez
Ultima modificación: 11/06/2020  
*/

#include<iostream>
#include<cassert>

using namespace std;

bool IsBisiesto(unsigned);

int main(){
	
	assert(not IsBisiesto(1700));
	assert(not IsBisiesto(1400));
	assert(IsBisiesto(2020)); 
	assert(not IsBisiesto(1826));
	assert(not IsBisiesto(1432));
	assert(not IsBisiesto (1));
	assert(IsBisiesto (2000));
	assert(not IsBisiesto (1999));
 
 return 0;
}

bool IsBisiesto(unsigned year){
	return year>1582 and (year%4 == 0) and (year%100 !=0 or year%400 == 0);
}
