#include <iostream>
#include <math.h>

int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
int ExponentiateTwoNumbers(int number_1, int number_2);
void PrintAdd(int number_1, int number_2);
void PrintSubtract(int number_1, int number_2);
void PrintMultiply(int number_1, int number_2);
void PrintDivide(int number_1, int number_2);
void PrintExponent(int number_1, int number_2);
void ListOperations();
void CalculateResult(char option, int number_1, int number_2);

int main() {
  
  char option;
  
  do {
  
  ListOperations();
    
  std::cin >> option; 
    if (option == 'x' || option == 'X') {
      std::cout << "Viszlát!" << std::endl;
     continue;
      }
      else if(option != 'a' && option != 'b' && option != 'c' && option != 'd' && option != 'e') {
      std::cerr << "Rossz karaktert adtál meg, ezért a program leáll!" << std::endl;
      return 1;
      }
  int number_1;
  int number_2;
  
  std::cout << "Add meg az első számot: " << std::endl;
  std::cin >> number_1;
  std::cout << "Add meg a második számot: " << std::endl;
  std::cin >> number_2;
  
  CalculateResult(option, number_1, number_2);

  }
  while (option != 'x' && option != 'X');

}
  
int AddTwoNumbers(int number_1, int number_2) {
  return number_1 + number_2;
}
int SubtractTwoNumbers(int number_1, int number_2) {     return number_1 - number_2;
}
int MultiplyTwoNumbers(int number_1, int number_2) {
  return number_1 * number_2;
}
double DivideTwoNumbers(int number_1, int number_2) {
  return number_1 / (double)number_2;
}
int ExponentiateTwoNumbers(int number_1, int number_2){
  return pow(number_1, number_2);
}

void PrintAdd(int number_1, int number_2) {
  std::cout << number_1  << " + " << number_2 << " = " << AddTwoNumbers(number_1, number_2) << std::endl;
  }
 
void PrintSubtract(int number_1, int number_2) { 
  std::cout << number_1  << " - " << number_2 << " = " << SubtractTwoNumbers(number_1, number_2) <<        std::endl;
  }
  
void PrintMultiply(int number_1, int number_2) {
  std::cout << number_1  << " * " << number_2 << " = " << MultiplyTwoNumbers(number_1, number_2) << std::endl;
  }
  
void PrintDivide(int number_1, int number_2) {
  std::cout << number_1  << " / " << number_2 << " = " << DivideTwoNumbers(number_1, number_2) << std::endl;
  }

void PrintExponent(int number_1, int number_2) {
  std::cout << pow(number_1, number_2) << std::endl;
}

void ListOperations() {
  std::cout << "Választható műveletek: " << std::endl;
  std::cout << "\ta) - Összeadás" << std::endl;
  std::cout << "\tb) - Kivonás" << std::endl;
  std::cout << "\tc) - Szorzás" << std::endl;
  std::cout << "\td) - Osztás" << std::endl;
  std::cout << "\te) - Hatványozás" << std::endl;
  std::cout << "\tx) - Kilépés" << std::endl;
  std::cout << "Művelet kiválasztásához üsd be a megfelelő betűt!" << std::endl;
}
void CalculateResult(char option, int number_1, int number_2) {
  if (option == 'a') {
    PrintAdd(number_1, number_2);
  } else if (option == 'b') {
    PrintSubtract(number_1, number_2);
  } else if (option == 'c') {
    PrintMultiply(number_1, number_2);
  } else if (option == 'd') {
    PrintDivide(number_1, number_2);
  } else if (option == 'e') {
    PrintExponent(number_1, number_2);
  }
}


 

