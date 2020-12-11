#include <iostream>
#include <math.h>

int AddTwoNumbers(int number_1, int number_2);
int SubtractTwoNumbers(int number_1, int number_2);
int MultiplyTwoNumbers(int number_1, int number_2);
double DivideTwoNumbers(int number_1, int number_2);
int ExponentiateTwoNumbers(int number_1, int number_2);
double SquareRootNumber(int number_1);
void PrintAdd(int number_1, int number_2);
void PrintSubtract(int number_1, int number_2);
void PrintMultiply(int number_1, int number_2);
void PrintDivide(int number_1, int number_2);
void PrintExponent(int number_1, int number_2);
void PrintSquareRoot(int number_1);
void ListOperations();
void CalculateResult(char option, int number_1, int number_2);
void CountPower(int number_1, int number_2);
int CountForSquare(int number_1);
int NumberFromUser1(int number_1);
int NumberFromUser2(int number_2);

int main() {
  
  int number_1;
  int number_2;
  char option;
  
  do {
  
  ListOperations();
    
  std::cin >> option; 
    if (option == 'x' || option == 'X') {
      std::cout << "Viszlát!" << std::endl;
     continue;
      }else if (option == 'f') {
        number_1 = CountForSquare(number_1);
      } 
        else if (option == 'g') {
        std::cout << "A derékszögű háromszög melyik oldalát szeretné kiszámolni?" << std::endl;
        std::cout << "1.) - Az átfogót." << std::endl;
        std::cout << "2.) - Az egyik befogót." << std::endl;
      }
      else if (option == 'h') {
        number_1 = NumberFromUser1(number_1);
        number_2 = NumberFromUser2(number_2);
        CountPower(number_1, number_2);
                      
      }else if (option == 'a' || option == 'b' || option == 'c' || option == 'd' || option == 'e') {
        number_1 = NumberFromUser1(number_1);
        number_2 = NumberFromUser2(number_2);
      } 
      else {
      std::cerr << "Rossz karaktert adtál meg, ezért a program leáll!" << std::endl;
      return 1;
      }
  
  
  
  
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
double SquareRootNumber(int number_1) {
  return sqrt(number_1);
}
void CountPower (int number_1, int number_2) {
  std::cout << number_1 << "^2 + " << number_2 << "^2 = " << pow(number_1, 2) << " + " << pow(number_2, 2) << " = " << pow(number_1, 2) + pow(number_2, 2) << std::endl;
  std::cout << pow(number_1, 2) + pow(number_2, 2) << " √ = " << sqrt(pow(number_1, 2) + pow(number_2, 2)) << std::endl; 
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
  std::cout << number_1 << " ^ " << number_2 << " = " << ExponentiateTwoNumbers(number_1, number_2) << std::endl;
}
void PrintSquareRoot(int number_1){
  std::cout << number_1 << " √ = " << SquareRootNumber(number_1) << std::endl;
}

void ListOperations() {
  std::cout << "Választható műveletek: " << std::endl;
  std::cout << "\ta) - Összeadás" << std::endl;
  std::cout << "\tb) - Kivonás" << std::endl;
  std::cout << "\tc) - Szorzás" << std::endl;
  std::cout << "\td) - Osztás" << std::endl;
  std::cout << "\te) - Hatványozás" << std::endl;
  std::cout << "\tf) - Négyzetgyökvonás" << std::endl;
  std::cout << "\tg) - Pitagorasz-tétel alkalmazása" << std::endl;
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
  } else if (option == 'f') {
    PrintSquareRoot(number_1);
  }
}

int NumberFromUser1(int number_1) {
    std::cout << "Add meg az első számot: " << std::endl;
    std::cin >> number_1;
    return number_1;
}
int NumberFromUser2(int number_2) {
  std::cout << "Add meg a második számot: " << std::endl;
  std::cin >> number_2;
  return number_2;
}

  int CountForSquare(int number_1){ 
    std::cout << "Add meg a számot: " << std::endl;
    std::cin >> number_1;
    return number_1;
  }



 

