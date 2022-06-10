#pragma once
class Point2D
{
	int x = 0, y = 0;
public:
	Point2D(int px, int py);
	//double calc(Point2D other);
};

class Point3D : public Point2D//zalezna od Point2D (dziedziczenie)
{
	int z;
public:
	//Point3D(int ppx, int ppy, int ppz) : Point2D(ppx, ppy)
	//{
	//	this->z = ppz;
	//}


	//ten zapis jest jednoznaczny z tym powyzej
	Point3D(int ppx, int ppy, int ppz);
};

//double calc(Point2D p1, Point2D p2)// to jedno z rozwi¹zañ
//{}

void fooBar()
{
	int x = 5;
	int y = (x);
	Point2D p2(2, 10);
	Point3D p2(2, 10, 5);
}