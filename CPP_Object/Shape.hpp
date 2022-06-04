#pragma once

struct Point
{
	int x;
	int y;
};

class Rectangle 
{
	int a = 0, b = 0;
public:
	Rectangle();
	Rectangle(int a, int b);
	Rectangle(Point ur, Point ll); //upper-right, lpwer - left
	void setDimension(int x, int y);
	int getField();
	int getCircuit();
};


class Triangle
{ //zakladam ze to trojkat prostokatny
	int a = 0;
	int h = 0;
	int p = 0;

public:
	void setDimensions(int z, int u, int w);
	int getTriangleField();
	int getTriangleCircuit();

};

class Circle 
{
	int r = 0;
public:
	void setRadius(int r);
	double getCircleField();
	double getCircleCircuit();
};