#include <iostream>

char * uniqueChar (  char * str )  {
  bool characters[256];
  // MApping all chars as bool , if the char is present (let's say "a") the characters[(int)a] == True
  // This is how i am detecting if a cvharacters is already present or not
  char * output = new char[256];
  int counter = 0;

  for ( char* tmp_str = str; *tmp_str != '\0' ; tmp_str++ ) {
    
    if ( characters[(int)(char)*tmp_str] ) {
      // Character is there
      // Just ignore it
    }
    else {
      // Character is not present.
      output[counter] = (char)*tmp_str;
      counter++;
      characters[(int)(char)*tmp_str] = true;
      
    }
  }
  output[counter] = '\0';
  return(output);
}

int main ( void )  {
  char str [10] = "aabbxccxx";
  char *  newString = (char *) uniqueChar(str);
  std::cout << str << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << newString << std::endl;
  return(0);
}  
  
  
  
  

    
    
      
