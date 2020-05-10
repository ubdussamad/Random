#include <vector>
#include <iostream>
#include <cstdlib>
#define P std::cout <<


  std::vector<int> numbers;
  bool negative;

int reverse (  int );
int main (  void ) {

  P reverse(-231);
  
}


  int reverse(int x) {
    if (x < 0) {
      x = abs(x);
      negative = 1;
      P negative << "is negative" << "\n";
    }

    while(x > 0) {
      int temp =  x % 10;
      numbers.push_back(temp);
      x = x / 10;
    }

    int rev = 0;
    for(int i = 0; i < numbers.size(); i++) {
      rev *= 10;
      rev += numbers[i];
    }
    P "Value of negative is:" << negative << "\n";
    if (negative) {
      P "Multiplying\n";
      rev = -rev;
    }
    return rev;
}
