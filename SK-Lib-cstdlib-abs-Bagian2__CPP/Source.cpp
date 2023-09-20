#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <valarray>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

int main() {
    valarray<int> varr = { 20, 12, -20, 0, -30 };
    valarray<int> varr1;

    varr1 = abs(varr);


    cout << "Valarray baru dengan" << " nilai yang dimanipulasi adalah : ";

    for (int& x : varr1) {
        cout << x << " ";
    }

    cout << endl;

    _getch();
    return 0;
}