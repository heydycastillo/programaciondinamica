#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
     //se  lee cantidad de escalones 
    cout << "Ingrese el numero de escalones: ";
    cin >> n;
    // tabla dp donde almacena las formas de llegar al escalon i
    vector<long long> dp(n + 1);
    dp[0] = 1; // caso base
    if (n >= 1) {
        dp[1] = 1;
    }
    return 0;
}