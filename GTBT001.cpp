#include <iostream>
#include <iomanip>
#include<math.h>
using namespace std;

// A function to calculate the sum of numbers from 1 to k
double sum(int k) {
    double s = 0;
    for (int i = 1; i <= k; i++) {
        s += i;
    }
    return s;
}

// A function to calculate S(x, n) according to the formula
double S(double x, int n) {
    double s = 0;
    for (int k = 1; k <= n; k++) {
        s += pow(x, k) / sum(k);
    }
    return s;
}

int main() {
    int t; // The number of testcases
    cin >> t;
    while (t--) {
        int n; // The positive integer n
        double x; // The real number x
        cin >> n >> x;
        cout << fixed << setprecision(3) << S(x, n) << endl; // Print the value of S(x, n) with 3 decimal places
    }
    return 0;
}