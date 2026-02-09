#include <iostream>
#include <limits>

int main() {
  
  double largest_double = std::numeric_limits<double>::max();
  double number{};

  std::cout << "The largest double is " << largest_double << '\n';
  std::cout << "Input a number to see what happens" << "\n" << ">";
  std::cin >> number;

  if(std::cin) {
    std::cout << "Output: " << number;
  }
  else {
    std::cout << "Yo something went wrong";
  }

}
