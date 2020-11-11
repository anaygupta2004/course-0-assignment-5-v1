#include <iostream>
#include <string>
using namespace std;


float CostOfIngredient(string ingredient) {
  int num_ingredent;
  cout << "Enter an ingredient of choice: ";
  cin >> ingredient;
  cout << "How many of the " << ingredient << "  are in the recipe: ";
  cin >> num_ingredent;

  float price_ingredient;
  cout << "What is the price of the " << ingredient << " : ";
  cin >> price_ingredient;

  float total_ingredient_cost = num_ingredent * price_ingredient;
  return total_ingredient_cost;
}

int main() {
  float total_cost = 0;
  string ingredient;
  int num_avocados;
  cout << "How many avocados are in the recipe: ";
  cin >> num_avocados;
  if (num_avocados > 0) {
    int price_avocado;
    cout << "What is the price of an avocado: ";
    cin >> price_avocado;
    int price_of_all_avocados = num_avocados * price_avocado;
    total_cost = total_cost + price_of_all_avocados;
  }

  int num_tomatoes;
  cout << "How many tomatoes are in the recipe: ";
  cin >> num_tomatoes;
  if (num_tomatoes > 0) {
    float price_tomato;
    cout << "What is the price of a tomato: ";
    cin >> price_tomato;
    int price_of_all_tomatoes = num_tomatoes * price_tomato;
    total_cost = total_cost + price_of_all_tomatoes;
  }

  int num_onions;
  cout << "How many onions are in the recipe: ";
  cin >> num_onions;
  if (num_onions > 0) {
    int price_onion;
    cout << "What is the price of an onion: ";
    cin >> price_onion;
    int price_of_all_onions = num_onions * price_onion;
    total_cost = total_cost + price_of_all_onions;
  }

  total_cost += CostOfIngredient(ingredient);

  cout << "The total cost of the recipe will be: $" << total_cost << endl;
}
