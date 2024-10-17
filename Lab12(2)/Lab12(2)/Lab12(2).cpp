#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення f(x)
double f(double x) {
    return pow(2, x) - (x - floor(x)); // 2^x - дробова частина x
}

int main() {
    double start_x = 0.2; // Початкове значення x
    double step = 0.4;    // Крок
    int num_values = 5;   // Кількість значень

    for (int i = 0; i < num_values; ++i) {
        double x = start_x + i * step;
        double result = f(x);
        cout << "f(" << x << ") = " << result << endl;
    }

    return 0;
}
    