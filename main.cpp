#include <iostream>

int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
void PrintAdd(int number_1, int number_2);
void PrintSubtract(int number_1, int number_2);
void PrintMultiply(int number_1, int number_2);
void PrintDivide(int number_1, int number_2);



int main() {
  int number_1 = 20;
  int number_2 = 10;
  
  
  AddTwoNumbers(number_1, number_2);
  SubtractTwoNumbers(number_1, number_2);
  MultiplyTwoNumbers(number_1, number_2);
  DivideTwoNumbers(number_1, number_2);
  PrintAdd(number_1, number_2);
  PrintSubtract(number_1, number_2);
  PrintMultiply(number_1, number_2);
  PrintDivide(number_1, number_2);
  
}

//adding - összeadás
int AddTwoNumbers(int number_1, int number_2) {
  return number_1 + number_2;
    }
  //subtraction - kivonás
int SubtractTwoNumbers(int number_1, int number_2) {     return number_1 - number_2;
  }
  //multiplying - szorzás
int MultiplyTwoNumbers(int number_1, int number_2) {
  return number_1 * number_2;
  }
  //division - osztás (typecasting)
double DivideTwoNumbers(int number_1, int number_2) {
  return number_1 / (double)number_2;
  }
  //print adding - összeadás kinyomtatása
void PrintAdd(int number_1, int number_2) {
  int adding = AddTwoNumbers(number_1, number_2);
  std::cout << number_1  << " + " << number_2 << " = " << adding << std::endl;
  }
  //print subtraction - kivonás kinyomtatása
void PrintSubtract(int number_1, int number_2) { 
  int subtract = SubtractTwoNumbers(number_1, number_2);
  std::cout << number_1  << " - " << number_2 << " = "    << subtract << std::endl;
  }
  //print multiplying - szorzás kinyomtatása
void PrintMultiply(int number_1, int number_2) {
  int multiply = MultiplyTwoNumbers(number_1, number_2);
  std::cout << number_1  << " * " << number_2 << " = " << multiply << std::endl;
  }
  //print division - osztás kinyomtatása
void PrintDivide(int number_1, int number_2) {
  double divide = DivideTwoNumbers(number_1, number_2);
  std::cout << number_1  << " / " << number_2 << " = " << divide << std::endl;
  }