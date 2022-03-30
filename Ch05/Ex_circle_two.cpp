#include <iostream>
using namespace std;

class Circle {
public:
    int radius;
    Circle();
    Circle(int r);
    double getArea();
};

Circle::Circle() : Circle(1) {} // �Լ��� �ٷ� ȣ��

Circle::Circle(int r) {
    radius = r;
    cout << "������ " << radius << " �� ����" << endl;
}

double Circle::getArea() {
    return 3.14*radius*radius;
}

int main()
{
    int size;
    Circle donut;
    double area = donut.getArea();
    cout << "donut ������ " << area << endl;

    cout << "������ ������ �Է� >> ";
    cin >> size;

    Circle pizza(size);
    area = pizza.getArea();
    cout << "pizza ������ " << area << endl;
}