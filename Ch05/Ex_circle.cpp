#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle()
{
    radius = 1;
    cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}

int main()
{
    Circle donut;
    double area = donut.getArea();
    cout << "donut ������ " << area << endl;
}