#include <iostream>
#include <vector>

void ex1(){
    
  // In the standard library, a std::vector is an array with automatic size.
  // Let's make a vector of ints and loop over the contents.
   
  std::vector<int> int_list;
  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);
  
  // Automatically loop over each item, one at a time:
  for (int x : int_list) {
    // This version of the loop makes a temporary copy of each
    // list item by value. Since x is a temporary copy,
    // any changes to x do not modify the actual container.
    x = 99;
  }
  std::cout << "ex1" << std::endl; 
  for (int x : int_list) {
    std::cout << "This item has value: " << x << std::endl;
  }
  
  std::cout << "If that worked correctly, you never saw 99!" << std::endl;

      
}

void ex2(){
  std::vector<int> int_list;
  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);
  
  for (int& x : int_list) {
    // This version of the loop will modify each item directly, by reference!
    x = 99;
  }
  std::cout << "ex2" << std::endl; 

  for (int x : int_list) {
    std::cout << "This item has value: " << x << std::endl;
  }
  std::cout << "Everything was replaced with 99!" << std::endl;
}

void ex3(){
    
  
  std::vector<int> int_list;
  int_list.push_back(1);
  int_list.push_back(2);
  int_list.push_back(3);
  std::cout << "ex3" << std::endl; 

  for (const int& x : int_list) {
    // This version uses references, so it doesn't make any temporary copies.
    // However, they are read-only, because they are marked const!
    std::cout << "This item has value: " << x << std::endl;
    // This line would cause an error:
    //x = 99;
  }

  
}


int main() { 
    ex1(); //no reference
    ex2(); //yes reference in the for loop temporary variable declaration
    ex3(); //yes reference but using const. When trying to change the const, it will cause an error
    return 0;
}