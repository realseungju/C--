#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char original[] = "Hello World!";
    char copy[30];

    cout << "original의 string은 " << original << "\n";

    strcpy(copy, original);

    cout << "copy의 복사된 string은 " << copy;
}