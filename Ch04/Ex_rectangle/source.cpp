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

    cout << "사각형 가로의 길이>> ";
    cin >> wid;
    cout << "사각형 세로의 길이>> ";
    cin >> hei;

    rect.width = wid;
    rect.height = hei;

    cout << "사각형의 면적은 " << rect.getArea() << endl;
}