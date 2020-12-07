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
  
  //[x] 1 - Egy változó deklarálása a felhasználó által kiválasztott művelet lementéséhez.
  char option;
  
  // 2) Műveletek kilistázása a konzolra.
  std::cout << "Választható műveletek:" << std::endl;
  std::cout << "  a) Összeadás" << std::endl;
  std::cout << "  b) Kivonás" << std::endl;
  std::cout << "  c) Szorzás" << std::endl;
  std::cout << "  d) Osztás" << std::endl;

   // 3) A művelet típusának bekérése a felhasználótól.
  std::cout << "Kérlek, válaszd ki a műveletet: " << std::endl;
  std::cin >> option; 
   
   // 4 - Helytelen bemenet ellenőrzése.
    if (option != 'a' && option != 'b' && option != 'c' && option != 'd') {
       // 5 - Üzenet a felhasználónak a program hibájáról.
      std::cerr << "Rossz karaktert adtál meg, ezért a program leáll!" << std::endl;
       // 6 - Program kiléptetése hiba esetén.
      return 1;
    }
   
  // 7 - A két szám bekérése a felhasználótól.
  
  // 8) A felhasználó által kiválasztott művelet végrehajtása az alábbiakból.
  /*
    a) Összeadás
    b) Kivonás
    c) Szorzás
    d) Osztás
  */
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