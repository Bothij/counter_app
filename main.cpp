#include <iostream>
#include <math.h>

double AddTwoNumbers(double number_1, double number_2);
double SubtractTwoNumbers(double number_1, double number_2);
double MultiplyTwoNumbers(double number_1, double number_2);
double DivideTwoNumbers(double number_1, double number_2);
double ExponentiateTwoNumbers(double number_1, double number_2);
double SquareRootNumber(double number_1);
double CountHypotenuse(double number_1, double number_2);
double CountOneSide(double number_3, double number_1);
void PrintAdd(double number_1, double number_2);
void PrintSubtract(double number_1, double number_2);
void PrintMultiply(double number_1, double number_2);
void PrintDivide(double number_1, double number_2);
void PrintExponent(double number_1, double number_2);
void PrintSquareRoot(double number_1);
void PrintCountHypotenuse (double number_1, double number_2);
void PrintCountOneSide (double number_3, double number_1);
void ListOperations();
void CalculateResult(char option, double number_1, double number_2);

double CountForSquare(double number_1);
double NumberFromUser1(double number_1);
double NumberFromUser2(double number_2);
double NumberToOneSide(double number_1);
double NumberToSecondSide(double number_2);
double NumberToHypotenuse(double number_3);

int main() {
  
  double number_1;
  double number_2;
  double number_3;
  char option;
  char option_2;
  
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
        do {
          std::cout << "A derékszögű háromszög melyik oldalát szeretnéd kiszámolni?" << std::endl;
          std::cout << "a.) - Az átfogót." << std::endl;
          std::cout << "b.) - Az egyik befogót." << std::endl;
          std::cout << "x.) - Visszalépés a műveletekhez." << std::endl;
            std::cin >> option_2;
            if (option_2 == 'x') {
              continue;
            }
            else if (option_2 == 'a') {
            number_1 = NumberToOneSide(number_1);
            number_2 = NumberToSecondSide(number_2);
            PrintCountHypotenuse(number_1, number_2);
            } else if (option_2 == 'b') {
              number_3 = NumberToHypotenuse(number_3);
              number_1 = NumberToOneSide(number_1); 
                if (number_3 <= number_1) {
                std::cerr << "Az átfogónak nagyobbnak kell lenni, mint a befogónak.\nPróbáld meg újra!\n" << std::endl;
              }else if (number_3 > number_1){
                PrintCountOneSide (number_3, number_1);
              }
          }else {
            std::cerr << "Rossz karaktert adtál meg.\nPróbáld meg újra!\n" << std::endl;
            }
            
        }
        while (option_2 != 'x' && option != 'X');
  
        }else if (option == 'a' || option == 'b' || option == 'c' || option == 'd' || option == 'e') {
        number_1 = NumberFromUser1(number_1);
        number_2 = NumberFromUser2(number_2);
      } 
      else {
      std::cerr << "Rossz karaktert adtál meg, ezért a program leáll!" << std::endl;
      return 1;
      }
  
    
  CalculateResult(option, number_1, number_2);
  std::cout << " " << std::endl;

  }
  while (option != 'x' && option != 'X');

}
  
double AddTwoNumbers(double number_1, double number_2) {
  return number_1 + number_2;
}
double SubtractTwoNumbers(double number_1, double number_2) {     return number_1 - number_2;
}
double MultiplyTwoNumbers(double number_1, double number_2) {
  return number_1 * number_2;
}
double DivideTwoNumbers(double number_1, double number_2) {
  return number_1 / number_2;
}
double ExponentiateTwoNumbers(double number_1, double number_2){
  return pow(number_1, number_2);
}
double SquareRootNumber(double number_1) {
  return sqrt(number_1);
}
//Pitagorasz-tétel kezdete
double CountHypotenuse(double number_1, double number_2) {
  return sqrt(pow(number_1, 2) + pow(number_2, 2));
  }
double CountOneSide(double number_3, double number_1) {
  return sqrt(pow(number_3, 2) - pow(number_1, 2));
}

void PrintCountHypotenuse(double number_1, double number_2) {
  std::cout << number_1 << "^2 + " << number_2 << "^2 = " << pow(number_1, 2) << " + " << pow(number_2, 2) << " = " << pow(number_1, 2) + pow(number_2, 2) << std::endl;
  std::cout << "√" << pow(number_1, 2) + pow(number_2, 2) << " = " << CountHypotenuse(number_1, number_2) << "\n" << std::endl; 
}
void PrintCountOneSide(double number_3, double number_1) {
  std::cout << number_3 << "^2 - " << number_1 << "^2 = " << pow(number_3, 2) << " - " << pow(number_1, 2) << " = " << pow(number_3, 2) - pow(number_1, 2) << std::endl;
  std::cout << "√" << pow(number_3, 2) - pow(number_1, 2) << " = " << CountOneSide(number_3, number_1) << "\n" << std::endl; 
}
double NumberToOneSide(double number_1) {
    std::cout << "Add meg az egyik befogó hosszúságát: " << std::endl;
    std::cin >> number_1;
    return number_1;
}
double NumberToSecondSide(double number_2) {
  std::cout << "Add meg a másik befogó hosszúságát: " << std::endl;
  std::cin >> number_2;
  return number_2;
}
double NumberToHypotenuse(double number_3) {
  std::cout << "Add meg az átfogó hosszúságát: " << std::endl;
  std::cin >> number_3;
  return number_3;
}
//Pitagorasz-tétel vége

void PrintAdd(double number_1, double number_2) {
  std::cout << number_1  << " + " << number_2 << " = " << AddTwoNumbers(number_1, number_2) << std::endl;
  }
 
void PrintSubtract(double number_1, double number_2) { 
  std::cout << number_1  << " - " << number_2 << " = " << SubtractTwoNumbers(number_1, number_2) <<        std::endl;
  }
  
void PrintMultiply(double number_1, double number_2) {
  std::cout << number_1  << " * " << number_2 << " = " << MultiplyTwoNumbers(number_1, number_2) << std::endl;
  }
  
void PrintDivide(double number_1, double number_2) {
  std::cout << number_1  << " / " << number_2 << " = " << DivideTwoNumbers(number_1, number_2) << std::endl;
  }

void PrintExponent(double number_1, double number_2) {
  std::cout << number_1 << " ^ " << number_2 << " = " << ExponentiateTwoNumbers(number_1, number_2) << std::endl;
}
void PrintSquareRoot(double number_1){
  std::cout << "√" << number_1 << " = " << SquareRootNumber(number_1) << std::endl;
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
void CalculateResult(char option, double number_1, double number_2) {
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

double NumberFromUser1(double number_1) {
    std::cout << "Add meg az első számot: " << std::endl;
    std::cin >> number_1;
    return number_1;
}
double NumberFromUser2(double number_2) {
  std::cout << "Add meg a második számot: " << std::endl;
  std::cin >> number_2;
  return number_2;
}

  double CountForSquare(double number_1){ 
    std::cout << "Add meg a számot: " << std::endl;
    std::cin >> number_1;
    return number_1;
  }



 

