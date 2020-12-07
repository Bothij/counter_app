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




int main() {
  
  
  //[x] 1 - Egy változó deklarálása a felhasználó által kiválasztott művelet lementéséhez.
  char option;
  
  // 2) Műveletek kilistázása a konzolra.
  ListOperations();
  

   // 3) A művelet típusának bekérése a felhasználótól.
  
  std::cin >> option; 
   
   // 4 - Helytelen bemenet ellenőrzése.
    if (option != 'a' && option != 'b' && option != 'c' && option != 'd') {
       // 5 - Üzenet a felhasználónak a program hibájáról.
      std::cerr << "Rossz karaktert adtál meg, ezért a program leáll!" << std::endl;
       // 6 - Program kiléptetése hiba esetén.
      return 1;
    }
   
  // 7 - A két szám bekérése a felhasználótól.
  //7-1 Kettő változó deklarálása a számok lementéséhez.
  int number_1;
  int number_2;
  // 7-2 Üzenet a felhasználó számára és az első szám bekérése.
  std::cout << "Add meg az első számot: " << std::endl;
  std::cin >> number_1;
  
  //7-3 Üzenet a felhasználó számára és a második szám bekérése.
  std::cout << "Add meg a második számot: " << std::endl;
  std::cin >> number_2;
  
  // 7-4 A felhasználó által kiválasztott művelet végrehajtása az alábbiakból.
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
  
  
  
  
  //print list
void ListOperations() {
  //2-1Az első sorban a következő üzenet jelenjen meg a konzolon: Választható műveletek:.
  std::cout << "Választható műveletek: " << std::endl;
  // 2-2Nyomtasd ki az elérhető műveletek listáját a konzolra.
  std::cout << "\ta) Összeadás" << std::endl;
  std::cout << "\tb) Kivonás" << std::endl;
  std::cout << "\tc) Szorzás" << std::endl;
  std::cout << "\td) Osztás" << std::endl;
  // 2-3Az utolsó sorban pedig a következőt nyomtasd ki a konzolra: Művelet kiválasztásához üsd be a megfelelő betűt!
  std::cout << "Művelet kiválasztásához üsd be a megfelelő betűt!" << std::endl;
}


 

