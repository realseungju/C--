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
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::Circle(int r)
{
    radius = r;
    cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle::~Circle()
{
    cout << "반지름 " << radius << " 원 소멸" << endl;
}

double Circle::getArea()
{
    return 3.14*radius*radius;
}

Circle globalDonut(1000);
Circle globalPizza(2000);

void f()
{
    cout << "지역 객체 시작" << endl;
    Circle fDonut(100);
    Circle fPizza(200);
    cout << "지역 객체 끝" << endl;
}

int main()
{
    cout << "메인 함수 시작" << endl;
    Circle donut;
    Circle pizza(30);
    f();
    cout << "메인 함수 끝" << endl;

    return 0;
}