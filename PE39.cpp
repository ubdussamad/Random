#include <iostream>

#define LIM_M 1000


int main  ( void ) {
  int max_pairs = 0;
  int m_having_max_pairs = 0;

  for ( int m = 10 ; m < LIM_M  ; m++ ) {
    int a = 1;
    int b = 1;
    int c = 1;
    int pairs = 0;
    //std::cout << "--------\nM:: " << m << std::endl;
    for ( a = 1 ; a < m ; a++ ) {
      //std::cout << "a: " <<a << std::endl;
      for (b = 1 ; b < (m-a) ; b++ ) {
	//std::cout << "b: " << b << std::endl;
	for ( c = 1; c < (m-a-b+1) ; c++ ) {
	  //std::cout << "c: " << c << std::endl;
	  if ( (a + b + c) == m ) {

	    if ( (a*a) == (b*b + c*c) ) {
	      //std::cout << "2" << std::endl;
	      // Then it's a solution	      
	      pairs++;
	    }
	    else {
	      //std::cout << "Rejecting Square Sum." << std::endl;
	}
	  }
	  
	  else {
	    //std::cout << "Reject SUM." << std::endl;
	  }
	}
      }
    }
    std::cout << "-----\nm: " << m << "p: " << pairs << std::endl;
    if ( pairs > max_pairs ) {
      max_pairs = pairs;
      m_having_max_pairs = m;
    }
  }

  std::cout << "\nM:" << m_having_max_pairs << "\nP:" << max_pairs << std::endl;
  return(0);
}
      
  
