#include <iostream>
using namespace std;

int main() {
  int m;
  int n = 25;
  char c = 'A';
  double d = 3.14;
  int *p = &n;
  char *q = &c;
  double *r = &d;
  m = *p + 10;
  cout << n << " " << c << " " << d << " " << endl;;
  cout << *p << " " << *q << " " << *r << " " << m << endl;
}