class CoffeeMachine {
  int coffee;
  int water;
  int suger;
public:
  CoffeeMachine(int c, int w, int s);
  void drinkEspresso();
  void drinkAmericano();
  void drinkSugerCoffee();
  void show();
  void fill();
};