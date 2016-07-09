#ifndef _Punto_cpp
#define _Punto_cpp
#include "Punto.h"


Punto ReadPunto(){
	Punto unPunto;
	std::cin >> unPunto.x;
	std::cin >> unPunto.y;
	return unPunto;
}	

bool TresAlineados(Punto a, Punto b, Punto c){
	if(((b.x - a.x)/(c.x - b.x)) == ((b.y - a.y)/(c.y - b.y)))
		return true;
	else
		return false;
}

bool DosPuntosIguales(Punto a, Punto b){
	if(a.x == b.x and a.y == b.y)
		return true;
	else
		return false;
}

bool AlineadosOIguales(Punto a, Punto b, Punto c){
	if((TresAlineados(a,b,c)==true) or (DosPuntosIguales(a,b)==true) or (DosPuntosIguales(a,c)==true) or (DosPuntosIguales(b,c)==true))
		return true;
	else
		return false;
}


#endif
