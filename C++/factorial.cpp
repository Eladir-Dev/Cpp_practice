/*
 * File: factorial.cpp
 * Author: Eduardo J. Matos
 * Course: COTI 4039-LH1
 * Date: oct/22/2025
 * Purpose: This program computes and displays the factorial of a non-negative integer
 *          using various techniques.
 */
 
 #include <iostrean>
 
 using namespace std;// ¡recordar bien!
 
 /**
  * Takes care of calculating the factorial of a determined number.
  */
 int factorial(int num) {
	 int prod = 1;
	 for (int i = num;i>0;i--) {
		 prod *= i;
	 }
	 return prod;
 }
 int main() {
	 cout << "Enter factorial: ";
	 int num;
	 cin >> num;
	 cout << "The factorial of " << num << " is " << factorial(num) << ".\n";
	 return 0;
 }