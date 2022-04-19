#include <iostream> // iostream 헤더파일을 포함
using namespace std; // 이름 공간에 std 클래스에 정의되어 있는 함수들을 사용

class Circle { // 클래스 Circle 정의
public: // 공개된 클래스 맴버
    int radius; // 정수형 타입 반지름
    Circle(); // 기본 생성자
    Circle(int r); // 위임 생성자
    ~Circle(); // 소멸자
    double getArea(); // 실수형 타입 원의 넓이 함수
};

Circle::Circle() // 원 생성 함수
{
    radius = 1; // 반지름은 1
    cout << "반지름 " << radius << " 원 생성" << endl; // 출력
}

Circle::Circle(int r) // 원 생성 함수
{
    radius = r; // 반지름은 r
    cout << "반지름 " << radius << " 원 생성" << endl; // 출력
}

Circle::~Circle() // 소멸자
{
    cout << "반지름 " << radius << " 원 소멸" << endl; // 출력
}

double Circle::getArea() // 원의 넓이를 구하는 함수
{
    return 3.14*radius*radius; // 리턴값
}

Circle globalDonut(1000); // 전역 함수
Circle globalPizza(2000); // 전역 함수

void f() // 리턴값이 없는 지역 함수 f()
{
    cout << "지역 객체 시작" << endl; // 출력
    Circle fDonut(100); // 지역 함수
    Circle fPizza(200); // 지역 함수
    cout << "지역 객체 끝" << endl; // 출력
}

int main() // 메인 함수
{
    cout << "메인 시작" << endl; // 출력
    Circle donut; // 메인 함수
    Circle pizza(30); // 메인 함수
    f(); // 지역 함수 f() 호출
    cout << "메인 끝" << endl; // 출력

    return 0; // 메인 함수가 int 형이니 OS에 0을 반환
}