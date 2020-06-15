// Prime Number Generator
#include <chrono>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> primeFactors;
  int number;
  cout << "Enter a number" << endl;
  cin >> number;
  primeFactors.push_back(1);
  int count = 2;
  while (number != 1) {
    if (number % count == 0) {
      // cout << count << endl;
      primeFactors.push_back(count);
      number = number / count;
      count = 2;
    } else {
      count++;
    }
  }

  cout << "--------------" << endl;

  for (int i = 0; i < primeFactors.size(); i++) {
    cout << primeFactors[i] << "  ";
  }
  int check = 1;
  for (int i = 0; i < primeFactors.size(); i++) {
    check = check * primeFactors[i];
  }
  cout << "\n--------------" << endl;
  cout << check << endl;
}
