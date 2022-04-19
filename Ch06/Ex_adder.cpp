#include <iostream>
using namespace std;

int adder(int a, int b) {
  return a+b;
}

int multip(int a, int b) {
  return a*b;
}

int main() {
  int a, b;
  cout << "input a and b >> ";
  cin >> a >> b;
  cout << "a + b = " << adder(a,b) << endl;
  cout << "a * b = " << multip(a,b) << endl;
}