#include <iostream>
#include <string>
using namespace std;

string s;

string add_prefix(const string input) {
  return "pre" + s;
}

int main() {
  cout << "Please type a word: ";
  cin >> s;
  cout << "Your word with pre added is: " << add_prefix(s) << endl;
}
