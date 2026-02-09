#include <iostream>
#include <limits>

int main(){
  
  int largest_int = std::numeric_limits<int>::max();
  double largest_double = std::numeric_limits<double>::max();
  
  std::cout << "The largest possible int is " << largest_int << '\n';
  std::cout << "The largest possible double is " << largest_double << '\n';

  std::cout << "Please enter some number(double) \n>";
  double number{};
  std::cin >> number;
  std::cout << number << '\n';
}
