// Prime Number Generator
#include <chrono>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;



int main() {
  vector<int> primeNumbers;
  int target;
  bool prime;
  primeNumbers.push_back(2);
  primeNumbers.push_back(3);
  cout << "How many prime numbers would you like? [2 or  more]" << endl;
  cin >> target;
  int length = primeNumbers.size();
  int count = 3;
  auto start = chrono::steady_clock::now();  // begin timer
  // checking divisibility with existing prime numbers
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
  auto finish = chrono::steady_clock::now(); // end timer
  chrono::duration<double> elapsed = finish - start;
  cout << "-------------------" << endl;
  length = primeNumbers.size();
  // open document
  ofstream document;
  document.open("primeList.txt");
  for (int i = 0; i < length; i++) {
    // cout << primeNumbers[i] << endl;
    document << primeNumbers[i] << endl;
  }
  document.close();
  cout << "Time to generate: " << elapsed.count() << " seconds" << endl;
  cout << "                  " << elapsed.count() / 60 << " minutes" << endl;
  cout << "                  " << elapsed.count() / 3600 << " hours" << endl;
}
