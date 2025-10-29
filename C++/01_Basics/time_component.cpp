/**
 * File: time_components.cpp
 * Author: Eduardo J. Matos Pérez
 * Disclamer: made from example in golang made by prof. Antonio Huertas, UPRB
 * Date: oct/18/2025
 * Purpose: This program computes and displays the components (hours, minutes,
 *          and seconds) of a moment in time.
 */

 #include <iostream>
 #include <tuple>

 using namespace std;

 // Computes the components (hours, minutes, and seconds) of a moment in time.
 tuple<int, int, int> timeComponents(int elapstTime) {// se debe declarar como tuple para retornar mas de un valor.
    const int secsPerHour = 3600;
    const int secsPerMin  = 60;

    int hours = elapstTime/secsPerHour;
    int minuts = (elapstTime%secsPerHour)/secsPerMin;
    int seconds = (elapstTime%secsPerHour)%secsPerMin;

    return make_tuple(hours, minuts, seconds); // crea un tuple de hours minuts, seconds
 }

 int main() {
     //===Declaracion de variables===
    int \
    hours;
    // el \ significa que la siguiente linea se ve como parte de la primera <-- ¡¡IMPORTANTE!!
    int minuts;
    int seconds;

    int elapstSeconds = 12345;
    tie(hours, minuts, seconds) = timeComponents(elapstSeconds);
    /*=====Other way=====
     *tuple<int, int, int> values = timeComponents(elapstSeconds);
     *get<0>(values);
     *get<1>(values);
     *get<2>(values);
     */
    cout << "The amount of elapst seconds is: " << elapstSeconds << endl;
    cout << "This is " << hours << " hours, " << minuts << " minuts, and " << seconds << endl;
    return 0;
 }
