#include <iostream>
using namespace std;

class Rectangle {
  int width;
  int height;
public:
  Rectangle();
  Rectangle(int x); // 변수 하나만 입력 받았을 때
  Rectangle(int a, int b); // 변수 두 개 입력 받았을 때
  int isSquare() { // int 형으로 1 0 리턴
    if(width == height) return 1;
    else return 0;
  }
};

Rectangle::Rectangle() : Rectangle(1) {} // 기본값

Rectangle::Rectangle(int x) {width = x; height = width;} // 값이 하나만 입력되면 width = height 인 정사각형

Rectangle::Rectangle(int a, int b) {width = a; height = b;}

int main()
{
  Rectangle rect1;
  Rectangle rect2(3,5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
  if(rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
  if(rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}