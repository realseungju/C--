#include <iostream>
using namespace std;

int bigger(int a,int b) {
  if(a>b)
    return a;
  else
    return b;
}
bool dividedBy3(int n) {
  if(n%3 == 0)
    return true;
  else
    return false;
}

int main() {
  int a, b, n;
  cout << "�� ���� ���� �Է� >> ";
  cin >> a >> b;
  n = bigger(a,b);
  cout << a << "�� " << b << " �� ū ���� " << n << "�Դϴ�.\n";
  if(dividedBy3(n) == true)
    cout << n << "�� " << "3�� ����Դϴ�.\n";
  else
    cout << n << "�� " << "3�� ����� �ƴմϴ�.\n";
}