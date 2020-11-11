#include <iostream>
#include <string>
using namespace std;

string get_temperature();

int main() {
  string temp = get_temperature();
  cout << temp << endl;
}

string get_temperature() {
  return "celcius";
}
