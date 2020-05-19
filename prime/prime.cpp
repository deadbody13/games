// Prime Number Generator
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> primeNumbers;
  int target;
  bool prime;
  primeNumbers.push_back(2);
  primeNumbers.push_back(3);
  // cout << "How many prime numbers would you like? [2 or  more]" << endl;
  // cin >> target;
  target = 1000000;
  int length = primeNumbers.size();
  int count = 3;
  while (length < target) {
    prime = true;
    for (int i = 0; i < length; i++) {
      if (count % primeNumbers[i] == 0) {
        prime = false;
        break;
      }
    }
    if (prime == true) {
      primeNumbers.push_back(count);
    }
    count += 2;
    length = primeNumbers.size();
  }
}