#include <iostream>
#include<bits/stdc++.h>


#define P std::cout <<
long int divide (  long int , long int ) ;


int main ( void  )  {
  P "\n\nthe div is: " << divide( -2100 , 3 ) << "\n";
}

long int divide(long int dividend, long int divisor) {
  if (dividend == divisor) {
    return 1;
  }
  if (divisor == 1) {
    return dividend;
  }
  if (dividend == 0 || divisor == INT_MIN) {
    return 0;
  }
  if (dividend == INT_MIN && divisor == -1) {
    return INT_MAX;
  }
 
  long sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1;
 
  long divid = labs(dividend);
  long divis = labs(divisor);

  P divid << divis << "\n";
 
  //long temp = 0;
  long  res = 0;
  for (long i = 31; i >= 0; i--) {
    if ( divid >= (divis << i) ) {
      divid -= divis << i;
      res |= 1L << i;
      if ( (divid < divis) || (!divid) ) { break; }
  }
  }
 
  return (res > INT_MAX) ? INT_MAX : sign * res;
}
