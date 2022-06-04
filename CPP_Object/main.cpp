#include <iostream>
#include <corecrt_math_defines.h>
#include "Shape.hpp"


int main()
{
	
	Rectangle rect;
	rect.setDimension(3, 7);
	std::cout << "Pole wynosi: " << rect.getField() << std::endl;
	std::cout << "Obwod wynosi: " << rect.getCircuit() << std::endl;

	Triangle triang;
	triang.setDimensions(5, 3, 10);
	std::cout << "Pole trojkata wynosi: " << triang.getTriangleField() << std::endl;
	std::cout << "Obwod trojkata wynosi: " << triang.getTriangleCircuit() << std::endl;

	Circle circlecircle;
	circlecircle.setRadius(5);
	std::cout << "Pole kola wynosi: " << circlecircle.getCircleField() << std::endl;
	std::cout << "Obwod kola wynosi: " << circlecircle.getCircleCircuit() << std::endl;

	Point p1;
	p1.x = 10;
	p1.y = 8;
	Point p2;
	p2.x = 10;
	p2.y = 8;

	Rectangle rect3(Point ur, Point ll);
	std::cout << "Pole wynosi - struct: " << rect.getField() << std::endl;
	std::cout << "Obwod wynosi - struct: " << rect.getCircuit() << std::endl;
	

	

	Rectangle rect2(5, 8); //z konstruktorem parametryzowanym
	std::cout << rect2.getField() << " " << rect2.getCircuit() << std::endl;
}

