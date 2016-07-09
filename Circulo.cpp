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
	return std::abs(unCirculo.r) * 2 * 3.14159;
}

double GetAreaCirculo(Circulo unCirculo){
	return 3.14159*unCirculo.r*unCirculo.r;
}
