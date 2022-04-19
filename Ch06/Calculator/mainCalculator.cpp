#include <iostream>
using namespace std;
#include "classAdder.h" // 덧셈 모듈과 계산기 클래스 헤더파일

Adder::Adder(int a, int b) {
  op1 = a; op2 = b;
}

int Adder::process() {
  return op1 + op2;
}

void Calculator::run() {
  int a,b;
  cout << "계산기가 시작되었습니다." << endl;
  cout << "두 개의 수를 입력하세요>> ";
  cin >> a >> b; // 정수 두 개 입력 받기
  Adder adder(a,b); // 덧셈기 생성
  cout << adder.process() << endl; // 덧셈 실행
}

int main() {
  Calculator calc; // 계산기 객체 생성
  calc.run(); // 계산기 시작

  Calculator calc2;
  calc2.run();
}