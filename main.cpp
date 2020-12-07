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
  char option;

  std::cout << "Választható műveletek:" << std::endl;
  std::cout << "  a) Összeadás" << std::endl;
  std::cout << "  b) Kivonás" << std::endl;
  std::cout << "  c) Szorzás" << std::endl;
  std::cout << "  b) Osztás" << std::endl;
  std::cout << "Kérlek, válaszd ki a műveletet: " << std::endl;
  std::cin >> option;

  if (option == 'a') {
    PrintAdd(number_1, number_2);
  }
  if (option == 'b') {
    PrintSubtract(number_1, number_2);
  }
  if (option == 'c') {
    PrintMultiply(number_1, number_2);
  }
  if (option == 'd') {
    PrintDivide(number_1, number_2);
  }

// 1) Egy változó deklarálása a felhasználó által kiválasztott művelettípus lementéséhez.
  // 2) Műveletek kilistázása a konzolra.
  // 3) A művelet típusának bekérése a felhasználótól.
  // 4) A két szám bekérése a felhasználótól.
  // 5) A felhasználó által kiválasztott művelet végrehajtása az alábbiakból.
  /*
    a) Összeadás
    b) Kivonás
    c) Szorzás
    d) Osztás
  */
  // 6) Helytelen bemenet esetén a program kiléptetése.
}

  /*AddTwoNumbers(number_1, number_2);
  SubtractTwoNumbers(number_1, number_2);
  MultiplyTwoNumbers(number_1, number_2);
  DivideTwoNumbers(number_1, number_2);
  PrintAdd(number_1, number_2);
  PrintSubtract(number_1, number_2);
  PrintMultiply(number_1, number_2);
  PrintDivide(number_1, number_2);*/
  


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
  std::cout << number_1  << " + " << number_2 << " = " << AddTwoNumbers(number_1, number_2) << std::endl;
  }
  //print subtraction - kivonás kinyomtatása
void PrintSubtract(int number_1, int number_2) { 
  std::cout << number_1  << " - " << number_2 << " = " << SubtractTwoNumbers(number_1, number_2) <<        std::endl;
  }
  //print multiplying - szorzás kinyomtatása
void PrintMultiply(int number_1, int number_2) {
  std::cout << number_1  << " * " << number_2 << " = " << MultiplyTwoNumbers(number_1, number_2) << std::endl;
  }
  //print division - osztás kinyomtatása
void PrintDivide(int number_1, int number_2) {
  std::cout << number_1  << " / " << number_2 << " = " << DivideTwoNumbers(number_1, number_2) << std::endl;
  }