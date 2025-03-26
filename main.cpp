#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>
#include <cmath>
#include <ctime>

using namespace std;

// Headers
string toString (double);
int toInt (string);
double toDouble (string);

int main() {
    srand(time(0));   //Seed random number generator
    
    int n, i, j, t;
    bool scambio;

    cout << "Quanti numeri vuoi ordinare?" << endl;
    cin >> n;
    int num[n];

    i = 0;
    scambio = true;
    while (i < n) {
        num[i] = rand() % (10 * n);
        i = i + 1;
    }
    i = 0;
    while (i <= n - 1 && scambio) {
        scambio = false;
        j = 0;
        while (j <= n - 2 - i) {
            if (num[j] > num[j + 1]) {
                t = num[j];
                num[j] = num[j + 1];
                num[j + 1] = t;
                scambio = true;
            }
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    while (i < n) {
        cout << "" << endl;
        i = i + 1;
    }
    i = 0;
    j = 0;
    while (i < n) {
        if (num[i] % 2 == 0) {
            cout << "" << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    i = 0;
    j = 0;
    while (i < n) {
        if (num[i] % 2 != 0) {
            cout << "" << endl;
            j = j + 1;
        }
        i = i + 1;
    }
    return 0;
}

