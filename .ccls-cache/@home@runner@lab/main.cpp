#include <iostream>
using namespace std;
int main() {
  string a;
  cout << "Vārds\n";
  cin >> a;
  if (a == "es") {
    cout << "nē es!";
  }
  cout << "Ievadītais vārds " + a;
}

