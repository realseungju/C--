#include <iostream>
#include <string>
using namespace std;

class Car {
  public:
    string name;
    string color;
    int speed;
    void speed_up();
    void speed_down();
};

void Car::speed_up() {
    speed = speed+10;
}

void Car::speed_down() {
    speed = speed-10;
}

int main()
{
    Car car;
    car.name = "Morning";
    car.color = "Red";
    car.speed = 30;
    int num;

    cout << "자동차의 이름은 " << car.name << "\n";
    cout << "자동차의 색상은 " << car.color << "\n";
    cout << "자동차의 현재 속도는 " << car.speed << "\n";

    while(true)
    {
        cout << "자동차의 속도 업은 1을 다운은 0을 입력해주세요(다른 수는 종료)>> ";
        cin >> num;

        if(num == 1)
        {
            car.speed_up();
            cout << "자동차의 올라간 속도는 " << car.speed << "\n";
        }
        else if(num == 0)
        {
            car.speed_down();
            cout << "자동차의 감소된 속도는 " << car.speed << "\n";
        }
        else
        {
            cout << "종료합니다." << endl;
            break;
        }
    }

    return 0;
}
