#include "Rectangulo.h"


Rectangulo ReadRectangulo(){
	Rectangulo unRectangulo;
	std::cout << "Origen: ";
	unRectangulo.origen = ReadPunto();
	std::cout << "Base: ";
	std::cin >> unRectangulo.b;
	std::cout << "Altura: ";
	std::cin >> unRectangulo.h; 
	return unRectangulo;
}

double GetPerimetroRectangulo(Rectangulo unRectangulo){
	return 2*std::abs(unRectangulo.h) + 2*std::abs(unRectangulo.b);
}

double GetAreaRectangulo(Rectangulo unRectangulo){
	return std::abs(unRectangulo.h) * std::abs(unRectangulo.b);
}
