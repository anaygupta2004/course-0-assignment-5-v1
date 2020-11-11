#include <iostream>
#include <string>
using namespace std;

int getAge() {
  return 4;
}

float getTemperature() {
  return 120.3;
}

int main() {
  cout << "The temperature is: " << getTemperature() << endl;
  cout << "The age is: " << getAge() << endl;
}
