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

    cout << "�ڵ����� �̸��� " << car.name << "\n";
    cout << "�ڵ����� ������ " << car.color << "\n";
    cout << "�ڵ����� ���� �ӵ��� " << car.speed << "\n";

    while(true)
    {
        cout << "�ڵ����� �ӵ� ���� 1�� �ٿ��� 0�� �Է����ּ���(�ٸ� ���� ����)>> ";
        cin >> num;

        if(num == 1)
        {
            car.speed_up();
            cout << "�ڵ����� �ö� �ӵ��� " << car.speed << "\n";
        }
        else if(num == 0)
        {
            car.speed_down();
            cout << "�ڵ����� ���ҵ� �ӵ��� " << car.speed << "\n";
        }
        else
        {
            cout << "�����մϴ�." << endl;
            break;
        }
    }

    return 0;
}
