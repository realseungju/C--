#include <iostream> // iostream ��������� ����
using namespace std; // �̸� ������ std Ŭ������ ���ǵǾ� �ִ� �Լ����� ���

class PrivateAccessError { // Ŭ���� PrivateAccessError ����
private: // ����� Ŭ���� �ɹ�
  int a; // ������ Ÿ�� a
  void f(); // ���ϰ��� ���� f() �Լ�
  PrivateAccessError(); // �⺻ ������
public: // ���� Ŭ���� �ɹ�
  int b; // ������ Ÿ�� b
  PrivateAccessError(int x); // ���� ������
  void g(); // ���ϰ��� ���� g() �Լ�
};

PrivateAccessError::PrivateAccessError() {a=1; b=1;} // �⺻ ������ a �� 1�� �����ϰ� b �� 1�� �����Ѵ�.

PrivateAccessError::PrivateAccessError(int x) {a=x; b=x;} // ���� ������ a �� x�� �����ϰ� b�� x�� �����Ѵ�.

void PrivateAccessError::f() {a=5; b=5;} // a �� 5�� �����ϰ� b �� 5�� �����Ѵ�.

void PrivateAccessError::g() {a=6; b=6;} // a �� 6�� �����ϰ� b �� 6�� �����Ѵ�.

int main() // ���� �Լ�
{
  PrivateAccessError objA; 
  // �⺻ �����ڸ� ȣ���Ѵ�. ������ �⺻ �����ڴ� ����� �ɹ� �̹Ƿ� ȣ���� �Ұ����ϴ�.
  PrivateAccessError objB(100);
  // ���� �����ڸ� ȣ���Ѵ�. ���� �����ڴ� ���� Ŭ���� �ɹ� �̹Ƿ� ȣ�� �����ϴ�.
  objB.a = 10; // �ɹ� a �� ����� �ɹ� �̹Ƿ� ȣ���� �Ұ����ϴ�.
  objB.b = 20; // �ɹ� b �� ���� �ɹ� �̹Ƿ� ȣ�� �����ϴ�.
  objB.f();    // f() �Լ��� ����� �ɹ� �̹Ƿ� ȣ���� �Ұ����ϴ�.
  objB.g();   // g() �Լ��� ���� �ɹ� �̹Ƿ� ȣ�� �����ϴ�.
}