#include "Circulo.h"

Circulo ReadCirculo(){
	Circulo unCirculo;
	std::cout << "Centro: ";
	unCirculo.centro = ReadPunto();
	std::cout << "Radio: ";
	std::cin >> unCirculo.r;
	return unCirculo;
}	

double GetCircunferencia(Circulo unCirculo){
	double circunferencia = std::abs(unCirculo.r) * 2 * 3.14159 ;
	return circunferencia;
}

double GetAreaCirculo(Circulo unCirculo){
	double areaCirculo = 3.14159*unCirculo.r*unCirculo.r;
	return areaCirculo;
}
