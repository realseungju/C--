#include <iostream>
using namespace std;

int addArray(int a[], int size) {
  int sum = 0;
  for(int i=0; i<size; i++)
    sum += a[i];
  return sum;
}

void makeDouble(int a[], int size) {
  for(int i=0; i<size; i++)
    a[i] = a[i]*2;
}

void printArray(int a[], int size) {
  for(int i=0; i<size; i++)
    cout << a[i] << " ";
}

int main() {
  int n[] = {1,2,3,4,5};

  int sum = addArray(n,5);

  cout << "�迭�� n�� ���� " << sum << "�Դϴ�\n";

  makeDouble(n,5);
  printArray(n,5);
}
