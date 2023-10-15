#include <iostream>
using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int r = a % b;
    a = b;
    b = r;
  }
  return a;
}

int main() {
  int num1, num2;
  cout << "Enter two numbers to find GCD using Euclidean algorithm: ";
  cin >> num1 >> num2;
  int gcdd = gcd(num1, num2);
  cout << "GCD of the two numbers: " << gcdd << endl;
  return 0;
}
