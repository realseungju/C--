#include "Calculator.h"
#include "Adder.h"
#include <iostream>
using namespace std;

void Calculator::run() {
  int a,b;
  cout << "���Ⱑ ���۵Ǿ����ϴ�." << endl;
  cout << "�� ���� ���� �Է��ϼ���>> ";
  cin >> a >> b; // ���� �� �� �Է� �ޱ�
  Adder adder(a,b); // ������ ����
  cout << adder.process() << endl; // ���� ����
}