#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char original[] = "Hello World!";
    char copy[30];

    cout << "original�� string�� " << original << "\n";

    strcpy(copy, original);

    cout << "copy�� ����� string�� " << copy;
}