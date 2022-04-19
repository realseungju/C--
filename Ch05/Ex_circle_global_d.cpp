#include <iostream> // iostream ��������� ����
using namespace std; // �̸� ������ std Ŭ������ ���ǵǾ� �ִ� �Լ����� ���

class Circle { // Ŭ���� Circle ����
public: // ������ Ŭ���� �ɹ�
    int radius; // ������ Ÿ�� ������
    Circle(); // �⺻ ������
    Circle(int r); // ���� ������
    ~Circle(); // �Ҹ���
    double getArea(); // �Ǽ��� Ÿ�� ���� ���� �Լ�
};

Circle::Circle() // �� ���� �Լ�
{
    radius = 1; // �������� 1
    cout << "������ " << radius << " �� ����" << endl; // ���
}

Circle::Circle(int r) // �� ���� �Լ�
{
    radius = r; // �������� r
    cout << "������ " << radius << " �� ����" << endl; // ���
}

Circle::~Circle() // �Ҹ���
{
    cout << "������ " << radius << " �� �Ҹ�" << endl; // ���
}

double Circle::getArea() // ���� ���̸� ���ϴ� �Լ�
{
    return 3.14*radius*radius; // ���ϰ�
}

Circle globalDonut(1000); // ���� �Լ�
Circle globalPizza(2000); // ���� �Լ�

void f() // ���ϰ��� ���� ���� �Լ� f()
{
    cout << "���� ��ü ����" << endl; // ���
    Circle fDonut(100); // ���� �Լ�
    Circle fPizza(200); // ���� �Լ�
    cout << "���� ��ü ��" << endl; // ���
}

int main() // ���� �Լ�
{
    cout << "���� ����" << endl; // ���
    Circle donut; // ���� �Լ�
    Circle pizza(30); // ���� �Լ�
    f(); // ���� �Լ� f() ȣ��
    cout << "���� ��" << endl; // ���

    return 0; // ���� �Լ��� int ���̴� OS�� 0�� ��ȯ
}