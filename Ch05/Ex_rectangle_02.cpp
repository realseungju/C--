#include <iostream>
using namespace std;

class Rectangle {
  int width;
  int height;
public:
  Rectangle();
  Rectangle(int x); // ���� �ϳ��� �Է� �޾��� ��
  Rectangle(int a, int b); // ���� �� �� �Է� �޾��� ��
  int isSquare() { // int ������ 1 0 ����
    if(width == height) return 1;
    else return 0;
  }
};

Rectangle::Rectangle() : Rectangle(1) {} // �⺻��

Rectangle::Rectangle(int x) {width = x; height = width;} // ���� �ϳ��� �ԷµǸ� width = height �� ���簢��

Rectangle::Rectangle(int a, int b) {width = a; height = b;}

int main()
{
  Rectangle rect1;
  Rectangle rect2(3,5);
  Rectangle rect3(3);

  if(rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
  if(rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
  if(rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}