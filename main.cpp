#include <iostream>
#include "funcs.h"

int main(){

  //Task A
  std:: cout << "(Task A)" << std:: endl;
  std:: cout << "Range from 3 to 1 is: " << printRange(3,1) << std:: endl;
  std:: cout << "Range from 1 to 3 is: " << printRange(1,3) << std:: endl;
  std:: cout << "Range from -2 to 10 is: "<< printRange(-2,10) << std:: endl;

  std:: cout << "--------------------------------------" << std:: endl;

  //Task B
  std:: cout << "(Task B)" << std:: endl;
  std:: cout << "Sum from 1 to 3 is: " << sumRange(1, 3) << std:: endl; //6
  std::  cout << "Sum from -2 to 10 is: " << sumRange(-2, 10) << std:: endl; //52
  std::  cout << "Sum from 10 to -2 is: " << sumRange(10, -2) << std:: endl; //0

  std:: cout << "--------------------------------------" << std:: endl;

  //Task C
  std:: cout << "(TASK C: helper func)" << std:: endl;
  int size = 10;
  int *arr = new int[size]; // allocate array dynamically
  arr[0] = 12;
  arr[1] = 17;
  arr[2] = -5;
  arr[3] = 3;
  arr[4] = 7;
  arr[5] = -15;
  arr[6] = 27;
  arr[7] = 5;
  arr[8] = 13;
  arr[9] = -21;
  
  std:: cout << "Helper: Sum from indexes 0 to 9: " << sumArrayInRange(arr, 0, size-1) << std:: endl; //43
  std:: cout << "Helper: Sum from indexes 2 to 9: " << sumArrayInRange(arr, 2, size-1) << std:: endl; //34
  std:: cout << "Helper: Sum from indexes 1 to 2: " << sumArrayInRange(arr, 1, 2) << std:: endl; //12

  std:: cout << "\n" << std:: endl;  
  
  std:: cout << "Actual: Sum is " << sumArray(arr, size) << std:: endl; //the actual func; sum is 43
  std:: cout << "Actual: Sum is " << sumArray(arr, 5) << std:: endl;  //adds up first five elements; sum is 34

  std:: cout << "--------------------------------------" << std:: endl;

  //Task D
  std:: cout << ("(TASK D)") << std:: endl;
  std:: cout << "'' alphanumeric? " << isAlphanumeric("") << std:: endl; //1 = true
  std:: cout << "ABCD alphanumeric? " << isAlphanumeric("ABCD") << std:: endl; //1 = true
  std:: cout << "Abcd1234xyz alphanumeric? " << isAlphanumeric("Abcd1234xyz") << std:: endl; //1 = true
  std:: cout << "KLMN 8-7-6 alphanumeric? " << isAlphanumeric("KLMN 8-7-6") << std:: endl;  //0 = false

  std:: cout << "--------------------------------------" << std:: endl;

  //Task E
  std:: cout << ("(TASK E)") << std:: endl;
  std:: cout << "((())): " << nestedParens("((()))") << std:: endl; //true(1)
  std:: cout << "(): " << nestedParens("()") << std:: endl; //true(1)
  std:: cout << "'': " << nestedParens("") << std:: endl; //true(1)

  std:: cout << "\n" << std:: endl;
  
  std:: cout << "(((: " << nestedParens("(((") << std:: endl; //false(0)
  std:: cout << "((): " << nestedParens("(()") << std:: endl; //false(0)
  std:: cout << ")(: " << nestedParens(")(") << std:: endl; //false (0)
  std:: cout << "a(b)c: " << nestedParens("a(b)c") << std:: endl; //false(0)
  

}



