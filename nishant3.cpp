#include <iostream>

int main ( void )  {

  int struct_len = 0;
  
  struct node {
    std::string name;
    int marks;
    int roll;
    struct node * l = NULL;
    struct node * r = NULL;
  };
  
  long int log_length;
  std::cin >> log_length;
  std::string name_;
  int roll_;
  int a,b,c;
  int i = 0;

  struct node head;
  struct node * tmp = &head;
  for (  ; i < log_length ; i++ ) {
    std::cin >> name_ >> a >> b >> c;

    if (struct_len == 0) { // If the struct is empty
      head.name = name_;
      head.roll = i;
      head.marks = a+b+c;
      //head.l = NULL;
      //head.r = NULL;
      struct_len++;
    }
    else {
      while (1) {
	if ( tmp->marks == a+b+c ) { // We add the node to the right of current node
	  struct node *right_ptr = tmp->r;
	  struct node *fresh = new struct node;
	  fresh->name = name_;
	  fresh->roll = i;

	  if ( tmp->r != NULL ){
	    fresh->r = right_ptr;
	    right_ptr->l = fresh;
	  }
	  
	  fresh->l = tmp;
	  tmp->r = fresh;
	  
	}

	else if (tmp->marks > a+b+c && (tmp->l)->marks < a+b+c ) { // we add node to the left
	  
	}

	else if (tmp->marks > a+b+c && (tmp->l)->marks < a+b+c ) { // we add node to the right
	  
	}

	
  return(0);
}

  
  
