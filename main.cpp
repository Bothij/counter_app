#include <iostream>

void AddTwoNumbers(int number_1, int number_2);
void SubtractTwoNumbers(int number_1, int number_2);
void MultiplyTwoNumbers(int number_1, int number_2);
void DivideTwoNumber(int number_1, int number_2);


int main() {
  int number_1 = 5;
  int number_2 = 10;
  
  void AddTwoNumbers();
  void SubtractTwoNumbers();
  void MultiplyTwoNumbers();
  void DivideTwoNumber();
  
  
  
}

//adding - összeadás
void AddTwoNumbers(int number_1, int number_2) {
  std::cout << number_1  << " + " << number_2 << " = " << number_1 + number_2 << std::endl;
  }
  //subtraction - kivonás
void SubtractTwoNumbers(int number_1, int number_2) {     std::cout << number_1  << " - " << number_2 << " = "    << number_1 - number_2 << std::endl;
  }
  //multiplying - szorzás
void MultiplyTwoNumbers(int number_1, int number_2) {
  std::cout << number_1  << " * " << number_2 << " = " << number_1 * number_2 << std::endl;
  }
  //division - osztás (typecasting)
void DivideTwoNumbers(int number_1, int number_2) {
  std::cout << number_1  << " / " << number_2 << " = " << number_1 / (double)number_2 << std::endl;
  }