#include <iostream> // iostream 헤더파일을 포함
using namespace std; // 이름 공간에 std 클래스에 정의되어 있는 함수들을 사용

class PrivateAccessError { // 클래스 PrivateAccessError 정의
private: // 비공개 클래스 맴버
  int a; // 정수형 타입 a
  void f(); // 리턴값이 없는 f() 함수
  PrivateAccessError(); // 기본 생성자
public: // 공개 클래스 맴버
  int b; // 정수형 타입 b
  PrivateAccessError(int x); // 위임 생성자
  void g(); // 리턴값이 없는 g() 함수
};

PrivateAccessError::PrivateAccessError() {a=1; b=1;} // 기본 생성자 a 에 1을 대입하고 b 에 1을 대입한다.

PrivateAccessError::PrivateAccessError(int x) {a=x; b=x;} // 위임 생성자 a 에 x를 대입하고 b에 x를 대입한다.

void PrivateAccessError::f() {a=5; b=5;} // a 에 5를 대입하고 b 에 5를 대입한다.

void PrivateAccessError::g() {a=6; b=6;} // a 에 6을 대입하고 b 에 6을 대입한다.

int main() // 메인 함수
{
  PrivateAccessError objA; 
  // 기본 생성자를 호출한다. 하지만 기본 생성자는 비공개 맴버 이므로 호출이 불가능하다.
  PrivateAccessError objB(100);
  // 위임 생성자를 호출한다. 위임 생성자는 공개 클래스 맴버 이므로 호출 가능하다.
  objB.a = 10; // 맴버 a 는 비공개 맴버 이므로 호출이 불가능하다.
  objB.b = 20; // 맴버 b 는 공개 맴버 이므로 호출 가능하다.
  objB.f();    // f() 함수는 비공개 맴버 이므로 호출이 불가능하다.
  objB.g();   // g() 함수는 공개 맴버 이므로 호출 가능하다.
}