// Prime Number Generator
#include <chrono>
#include <fstream>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> primeNumbers{2, 3};
  int difference = 0;
  int maxDifference = 0;
  int target;
  bool prime;
  cout << "How many prime numbers would you like? [2 or  more]" << endl;
  cin >> target;
  int length = primeNumbers.size();
  int count = 3;
  auto start = chrono::high_resolution_clock::now();
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
      difference = primeNumbers[primeNumbers.size() - 1] -
                   primeNumbers[primeNumbers.size() - 2];
      if (difference > maxDifference) {
        maxDifference = difference;
      }
    }
    count += 2;
    length = primeNumbers.size();
  }
  auto finish = chrono::high_resolution_clock::now();
  chrono::duration<double> elapsed = finish - start;
  cout << "-------------------" << endl;
  length = primeNumbers.size();
  // open document
  ofstream document;
  document.open("primeList.txt");
  for (int i = 0; i < length; i++) {
    document << primeNumbers[i] << endl;
  }
  document.close();
  cout << "Time to generate: " << elapsed.count() << " seconds" << endl;
  cout << "                  " << elapsed.count() / 60 << " minutes" << endl;
  cout << "                  " << elapsed.count() / 3600 << " hours" << endl;
  cout << "\nHighest difference: " << maxDifference << endl;
  cout << endl;
}
