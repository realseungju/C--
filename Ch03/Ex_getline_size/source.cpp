#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "string�� �Է�>> ";
    char string[100];
    cin.getline(string,100,'\n');
    cout << "�Է��� string�� " << string << "�Դϴ�\n"; 
    cout << "string�� size�� " << strlen(string); // string length �Լ�
}