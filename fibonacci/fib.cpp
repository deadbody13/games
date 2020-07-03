#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<long unsigned int> fib;
  long unsigned int number, next;
  fib.push_back(1);
  fib.push_back(1);

  cout << "How many numbers would you like? [2 or more]" << endl;
  cin >> number;

  for (int i = 2; i < number; i++) {
    next = fib[fib.size() - 1] + fib[fib.size() - 2];
    fib.push_back(next);
  }
  cout << "---------------" << endl;
  for (long unsigned int i = 0; i < fib.size(); i++) {
    cout << fib[i] << endl;
  }
}
