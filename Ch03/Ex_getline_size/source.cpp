#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    cout << "string을 입력>> ";
    char string[100];
    cin.getline(string,100,'\n');
    cout << "입력한 string은 " << string << "입니다\n"; 
    cout << "string의 size는 " << strlen(string); // string length 함수
}