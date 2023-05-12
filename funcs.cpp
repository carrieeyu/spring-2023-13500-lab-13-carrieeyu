#include <iostream>

/*
void countdown(int n) {
    if (n > 0) {
        std:: cout << n << std:: endl;   // print n

        countdown(n-1);      // make recursive call, counting 
                             // from (n-1) down to 1
    }
    else {
        std:: cout << "Done!";     // base case
    }
}
*/


/*Task A
Prints all numbers in range left ≤   x   ≤ right, separated by spaces
*/
std:: string printRange(int left, int right){
  std:: string range;
  
  if(left > right){ //base case
    range = ""; //then the range will be empty and will not return any numbers
  }
  else{
    range = std::to_string(left) + " " + printRange(left+1, right); //left int will continue to increment by one until it is greater than the right int and then the recursive call will stop
  }
  return range;
  
}


/*Task B
Computes the sum of all numbers in range left ≤   x   ≤ right
*/
int sumRange(int left, int right){
  int sum;
  
  if(left > right){
    sum = 0;
  }
  else{
    sum = left + sumRange(left+1,right); //previous numbers from the left increment by the next number in line to the right 
  }
  return sum;
  
}


/*TASK C
1) *arr = a pointer to its first element
2) function itself should not do any new dynamic memory allocations
3) should return the sum of the array's elements

example:
    int sum1 = sumArray(arr, size); // Add all elements
    cout << "Sum is " << sum1 << endl;  // Sum is 43
    
    int sum2 = sumArray(arr, 5); // Add up first five elements
    cout << "Sum is " << sum2 << endl;  // Sum is 34
*/

//helper func
int sumArrayInRange(int *arr, int left, int right){
  int sum  = 0;

  if(left > right){
    sum = 0;
  }
  else{
    sum = arr[left] + sumArrayInRange(arr, left+1, right); //adds ints from the elements of the array
  }
  return sum;
  
}

//actual func
int sumArray(int *arr, int size){
  int sum = sumArrayInRange(arr, 0, size-1); //start from first element and iterate to size
  return sum;
}

/*Task D
Return true if all characters in the string are letters and digits, otherwise returns false
*/
bool isAlphanumeric(std:: string s){
  bool letter_and_num;

  if(s == ""){ //if the string is empty
    letter_and_num = true;
  }
  else{
    if(!isalnum(s[0])){ //if the first element of the string is not alphanumeric,
      letter_and_num = false; //then return false 
    }
    else{ //if the first element is alphanumeric, check the rest of the elements as well
      letter_and_num = isAlphanumeric(s.substr(1, s.length()-1));
    }
  }
  return letter_and_num;
  
}

/*Task E
- Returns true if the string is a sequence of nested parentheses; "", "()", "(())", "((()))"
- Any other symbols or mismatching parentheses returns false; "a(b)c", "(((", ")("
*/
bool nestedParens(std:: string s){
  bool nestedMatch;

  if(s == ""){ //if the string is empty
    nestedMatch = true;
  }
  else{
    if(s[0] == '(' && s[s.length()-1] == ')'){ //if it starts with ( and end with )
      nestedMatch = nestedParens(s.substr(1, s.length()-2)); //then check to see if parentheses match up from start to end
    }
    else{ //if it's any other symbol than the parentheses, 
      nestedMatch = false; //then return false
    }
  }
  return nestedMatch;

}

  
