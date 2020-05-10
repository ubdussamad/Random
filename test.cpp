#include <iostream>

int main (  void )  {

  int num = 5;
  const int& ref = num;

  std::cout << "Ref: " << ref << " Var: " << num << std::endl;

  //ref = 12;

  std::cout << "Ref: " << ref << " Var: " << num << std::endl;

  return(0);
}


  
  

  
