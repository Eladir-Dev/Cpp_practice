/**
 * File: integerToRoman.cpp
 * Authro: Eduardo J. Matos Pérez
 * Date: oct/21/2025
 * Description: This program transfroms a decimal number (integer) into 
 *              roman numbers.
 */
 
#include <iostream>

using namespace std;

string intToRoman(int num) {
	const string ten = "X";
	const string five = "V";
	const string one = "I";
	const string nine = "IX";
	const string four = "IV";
	const string L = "L"; //50
	const string C = "C"; //100
	const string D = "D"; //500
	const string M = "M"; //1,000
	
	string outputStr = "";
	int amount = num/1000;
	int extra = num%1000;
	for (int i=0;i<amount;i++) {
		outputStr += M;
	}
	
	amount = extra/500;
	extra = extra%500;
	for (int i=0;i<amount;i++) {
		outputStr += D;
	}
	
	amount = extra/100;
	extra = extra%100;
	for (int i=0;i<amount;i++) {
		outputStr += C;
	}
	
	amount = extra/50;
	extra = extra%50;
	for (int i=0;i<amount;i++) {
		outputStr += L;
	}
	
	amount = extra/10;
	extra = extra%10;
	for (int i=0;i<amount;i++) {
		outputStr += ten;
	}
	
	if (extra == 9) {
		outputStr += nine;
	}
	else if (extra == 4) {
		outputStr += four;
	}
	else if (extra >= 5){
		outputStr += five;
		for (int i=0;i<extra-5;i++){
			outputStr += one;
		}
	}
	else {
		for (int i = 0;i< extra;i++) {
			outputStr += one;
		}
	}
	
	
	
	return outputStr;
}
int main()
{
	cout << "=====Integer to Roman=====\n";
	cout << "Enter the decimal number: ";
	int number;
    cin >> number;
	cout << endl;
	
	string romNum = intToRoman(number);
	cout << "The equivalent roman number is: " << romNum << endl;
	
    return 0;
}
