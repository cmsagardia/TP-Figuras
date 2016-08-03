/* 	Trabajo Práctico Figuras.
	Fecha de entrega: 4 de Agosto 2016.
	Grupo 3:
	Matías Sagardia,
	Edgar Kiechle,
	Martín Di Paolo,
	Nicolás D'Andrea.
*/


#include<iostream>
#include<cmath> //para raiz cuadrada (std::sqrt) y valor absoluto (std::abs)
#include "Circulo.cpp"
#include "Rectangulo.cpp"
#include "Triangulo.cpp"


int main(){

	Circulo circuloUsuario = ReadCirculo();
	std::cout << "Circunferencia = " << GetCircunferencia(circuloUsuario) << "\n";
	std::cout << "Area Circulo = " << GetAreaCirculo(circuloUsuario) << "\n \n";
	

	Rectangulo rectanguloUsuario = ReadRectangulo();
	std::cout << "Perimetro Rectangulo = " << GetPerimetroRectangulo(rectanguloUsuario) << "\n";
	std::cout << "Area Rectangulo = " << GetAreaRectangulo(rectanguloUsuario) << "\n \n";
	
	
	Triangulo trianguloUsuario = ReadTriangulo();
	if(AlineadosOIguales(trianguloUsuario.a, trianguloUsuario.b, trianguloUsuario.c))
		std::cout << "Los puntos ingresados no forman un triangulo.";
	else{
		std::cout << "Perimetro Triangulo: " << GetPerimetroTriangulo(trianguloUsuario) << "\n";
		std::cout << "Area Triangulo: " << GetAreaTriangulo(trianguloUsuario) << "\n \n";
	}
}
