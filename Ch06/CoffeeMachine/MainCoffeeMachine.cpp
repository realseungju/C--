#include <iostream>
#include "CoffeeMachine.h"
using namespace std;

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
  coffee = c;
  water = w;
  suger = s;
}

void CoffeeMachine::drinkEspresso() {
  if(coffee < 1 || water < 1) {
    return;
  }
  coffee = coffee - 1;
  water = water - 1;
}

void CoffeeMachine::drinkAmericano() {
  if(coffee < 1 || water < 2) {
    return;
  }
  coffee = coffee - 1;
  water = water - 2;
}

void CoffeeMachine::drinkSugerCoffee() {
  if(coffee < 1 || water < 1 || suger < 2) {
    return;
  }
  coffee = coffee - 1;
  water = water - 1;
  suger = suger - 2;
}

void CoffeeMachine::show() {
  cout << "커피 마신 상태, 커피: " << coffee << " 물: " << water << " 설탕: " << suger << endl;
}

void CoffeeMachine::fill() {
  coffee = 10;
  water = 10;
  suger = 10;
}

int main() {
  CoffeeMachine java(5,10,3);
  java.show();
  java.drinkAmericano();
  java.show();
  java.drinkEspresso();
  java.show();
  java.drinkSugerCoffee();
  java.show();
  java.fill();
  java.show();
}
