#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    ~Circle();
    double getArea();
};

Circle::Circle()
{
    radius = 1;
    cout << "������ " << radius << " �� ����" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "������ " << radius << " �� ����" << endl;
}

Circle::~Circle()
{
    cout << "������ " << radius << " �� �Ҹ�" << endl;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
    cout << "���� ��ü ����" << endl;
    Circle fDonut(100);
    Circle fPizza(200);
    cout << "���� ��ü ��" << endl;
}

int main()
{
    cout << "���� �Լ� ����" << endl;
    Circle donut;
    Circle pizza(30);
    f();
    cout << "���� �Լ� ��" << endl;

    return 0;
}