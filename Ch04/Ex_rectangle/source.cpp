#include <iostream>
using namespace std;

class Rectangle {
public:
    int width;
    int height;
    int getArea();
};

int Rectangle::getArea() {
  return width*height;
}

int main()
{
    Rectangle rect;
    int wid;
    int hei;

    cout << "�簢�� ������ ����>> ";
    cin >> wid;
    cout << "�簢�� ������ ����>> ";
    cin >> hei;

    rect.width = wid;
    rect.height = hei;

    cout << "�簢���� ������ " << rect.getArea() << endl;
}