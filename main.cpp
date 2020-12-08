#include <iostream>

int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
void PrintAdd(int number_1, int number_2);
void PrintSubtract(int number_1, int number_2);
void PrintMultiply(int number_1, int number_2);
void PrintDivide(int number_1, int number_2);
void ListOperations();
void CalculateResult(char option, int number_1, int number_2);

int main() {
  // 1) Egy változó deklarálása a kilépésnél megadott „x” karakter mentéséhez.
  char option;
  // 2) A ciklus indítása.
  // 3) Karakter bekérése a felhasználótól.
    // 4) Az „x” karakter ellenőrzése.
  // 5) Üzenet a felhasználónak a program leállításáról.
  // 6) A már kész számológép futtatása.
  // 7) Az „x” karakter ellenőrzése a kontrolláló feltételben.
  do {
  
  ListOperations();
    
  std::cin >> option; 
    if (option == 'x') {
     std::cout << "Viszlát!" << std::endl;
     return option;
    }
      else if(option != 'a' && option != 'b' && option != 'c'   && option != 'd') {
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
  while (option != 'x');

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

void ListOperations() {
  std::cout << "Választható műveletek: " << std::endl;
  std::cout << "\ta) Összeadás" << std::endl;
  std::cout << "\tb) Kivonás" << std::endl;
  std::cout << "\tc) Szorzás" << std::endl;
  std::cout << "\td) Osztás" << std::endl;
  std::cout << "\tx) Kilépés" << std::endl;
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
  }
}


 

