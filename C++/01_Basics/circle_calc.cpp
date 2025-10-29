/**
 * File: circle_calc.cpp
 * Authro: Eduardo J. Matos Pérez
 * Disclamer: made from example in golang made by prof. Antonio Huertas, UPRB
 * Date: oct/18/2025
 * Description: This program computes and displays the area and circumference of
 *              the circle with the given radius.
 */

 #include <iostream>
 #define PI 3.14
 // los define funcionan como copy past

 using namespace std;

 // Computes the area of the circle with the given radiusl
 long double area(long double rad) {// es necesario declarar rad (long double rad) de no hacerlo da error.
    return PI * rad*rad;
 }
 // Computes the circumference of the circle with the given radius.
long double circumference(long double rad) {
    return 2 * PI * rad;
}
 //Starts the execution of the program
 int main(){
    long double radius = 5.0;
    cout << "The radius of the circle is: " << radius << endl;
    cout << "The area of the circle is: " << area(radius) << endl;
    cout << "The circunference of the circle is: " << circumference(radius) << endl;
    return 0;
 }
