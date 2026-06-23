#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;

    cout << "ingrese el numero de escalones: ";
    cin >> n; // leer la cantidad de escalones

    // tabla dp donde dp[i] almacena las formas de llegar al escalon i
    vector<long long> dp(n + 1);

    // casos base
    dp[0] = 1;
    if (n >= 1) {
        dp[1] = 1;
    }

    // llenar la tabla usando programacion dinamica
    for (int i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    // mostrar cantidad de formas posibles 
    cout << "formas posibles: " << dp[n] << endl;

    cout << "tabla dp: ["; // se muestra la tabla dp generada

    for (int i = 0; i <= n; i++) {
        cout << dp[i];

        if (i < n) {
            cout << ", ";
        }
    }

    cout << "]" << endl;

    return 0;
}