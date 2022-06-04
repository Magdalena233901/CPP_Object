#include "Shape.hpp"
#include <corecrt_math_defines.h>

//-----------------------------------STRUKTURA - PIERWSZY PRZYKLAD------------------------------------------------
class IDCard
{
public:
    struct Date
    {
        int day, month, year;
    };
    IDCard(int dayOfBirth, int dayOfIssue)
    {
        birthDate.day = dayOfBirth;
        issueDate.day = dayOfIssue;

    }
    IDCard(Date birthDate, Date issueDate)
    {
        this->birthDate = birthDate;
        this->issueDate = issueDate;
    }
private:
    Date birthDate;
    Date issueDate;
};

void foo()
{
    IDCard mateusz(27, 2);

    IDCard::Date jakubBirth; // obiekt zagniezdzony
    jakubBirth.day = 27;


    IDCard::Date jakubIssue; // obiekt zagniezdzony
    jakubIssue.day = 27;
}
//-----------------------------------------STRUKTURA - KONIEC PRZYKLADU-------------------------------------------------------------

//konstruktor bezparametrowy - moze byc pusty
//potrzebny, zeby utworzyc obiekt Rectangle rect
//gdybysmy nie mieli konstruktora parametryzowanego - ten by sie sam wygenerowal
Rectangle::Rectangle()
{
}


Rectangle::Rectangle(Point ur, Point ll)
{
    int width = (ur.x - ll.x);
    int height = (ur.y - ll.y);

    this->a = width;
    this->b = height;
}

Rectangle::Rectangle(int a, int b)
{
    this->a = a;
    this->b = b;
}

void Rectangle::setDimension(int x, int y)
{
    a = x;
    b = y;
}

int Rectangle::getField()
{
    return a * b;
}

int Rectangle::getCircuit()
{
    return (2 * a) + (2* b);
}

void Triangle::setDimensions(int z, int u, int w)
{
    a = z;
    h = u;
    p = w;

}

int Triangle::getTriangleField()
{
    return (a * h)/2;
}

int Triangle::getTriangleCircuit()
{
    return a + h + p;
}

void Circle::setRadius(int d)
{
    r = d;
}

double Circle::getCircleField()
{
    return M_PI * r * r;
}


double Circle::getCircleCircuit()
{
    return 2 * M_PI * r;
}
