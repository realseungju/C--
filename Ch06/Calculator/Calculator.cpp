#include "Calculator.h"
#include "Adder.h"
#include <iostream>
using namespace std;

void Calculator::run() {
  int a,b;
  cout << "계산기가 시작되었습니다." << endl;
  cout << "두 개의 수를 입력하세요>> ";
  cin >> a >> b; // 정수 두 개 입력 받기
  Adder adder(a,b); // 덧셈기 생성
  cout << adder.process() << endl; // 덧셈 실행
}