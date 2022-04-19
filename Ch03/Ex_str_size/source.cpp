#include <iostream>
using namespace std;

int main()
{
    string name = "appl   e";
    string name2 = "banana";
    cout << "string name은 " << name << "\n";
    cout << "string name의 size는 " << name.size() << "\n"; // size에 공백 포함
    cout << "string name2는 " << name2 << "\n";
    cout << "string name2의 size는 " << name2.size() << endl;
}