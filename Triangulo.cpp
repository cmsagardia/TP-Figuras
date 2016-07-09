#include "Triangulo.h"

Triangulo ReadTriangulo(){
	Triangulo unTriangulo;
	std::cout << "Lados (puntos): ";
	unTriangulo.a = ReadPunto();
	unTriangulo.b = ReadPunto();
	unTriangulo.c = ReadPunto();
	return unTriangulo;
}

double GetPerimetroTriangulo(Triangulo unTriangulo){
	return GetLado(unTriangulo.a, unTriangulo.b) + GetLado(unTriangulo.a, unTriangulo.c) + GetLado(unTriangulo.b, unTriangulo.c);
}

double GetAreaTriangulo(Triangulo unTriangulo){
	//semiperimetro
	double s = GetPerimetroTriangulo(unTriangulo)/2;
	//fórmula de Herón
	return std::sqrt(s*(s-GetLado(unTriangulo.a, unTriangulo.b))*(s-GetLado(unTriangulo.a, unTriangulo.c))*(s-GetLado(unTriangulo.b, unTriangulo.c)));
}

double GetLado(Punto a, Punto b){
	return std::sqrt((b.x-a.x)*(b.x-a.x) + (b.y-a.y)*(b.y-a.y));
}
