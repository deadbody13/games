// Prime Number Generator
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<long unsigned int> primeFactors;
  long unsigned int number, origNumber;
  cout << "Enter a number" << endl;
  cin >> number;
  origNumber = number;
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

  for (long unsigned int i = 0; i < primeFactors.size(); i++) {
    cout << primeFactors[i] << "  ";
  }
  cout << "\n--------------" << endl;
  if (primeFactors.size() == 2) {
    cout << origNumber << "  is a prime number\n" << endl;
  } else {
    cout << origNumber << "  is a composite number\n" << endl;
  }
  // int check = 1;
  // for (int i = 0; i < primeFactors.size(); i++) {
  //   check = check * primeFactors[i];
  // }
  //
  // cout << "\n--------------" << endl;
  // cout << check << endl;
}
