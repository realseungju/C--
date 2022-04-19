#include <iostream>
using namespace std;
#include "classAdder.h" // ���� ���� ���� Ŭ���� �������

Adder::Adder(int a, int b) {
  op1 = a; op2 = b;
}

int Adder::process() {
  return op1 + op2;
}

void Calculator::run() {
  int a,b;
  cout << "���Ⱑ ���۵Ǿ����ϴ�." << endl;
  cout << "�� ���� ���� �Է��ϼ���>> ";
  cin >> a >> b; // ���� �� �� �Է� �ޱ�
  Adder adder(a,b); // ������ ����
  cout << adder.process() << endl; // ���� ����
}

int main() {
  Calculator calc; // ���� ��ü ����
  calc.run(); // ���� ����

  Calculator calc2;
  calc2.run();
}