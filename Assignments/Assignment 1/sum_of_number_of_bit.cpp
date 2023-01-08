#include <iostream>
using namespace std;
int main() {

  unsigned long long num;

  cout << "Enter a number: ";
  cin >> num;
  int sum = 0;
  for (int i = 0; i < 20; i++) 
  {
    sum += (num >> i) & 1;
  }  
    cout << "Sum of bits: " << sum <<endl;

  return 0;
}
