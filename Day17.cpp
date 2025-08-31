#include <iostream>
#include <vector>
using namespace std;

vector<int> getPrimeFactors(int n) {
    vector<int> primes;
    if (n % 2 == 0) {
        do {
            primes.push_back(2);
            n /= 2;
        } while (n % 2 == 0);
    }
     for (int d = 3; d * 1LL <= n / d; d += 2) {
        while (n % d == 0) {
            primes.push_back(d);
            n /= d;
        }
    }
    if (n > 1) {
        primes.push_back(n);
    }
    return primes;
}
int main() {
    int num;
    cin >> num;
    vector<int> pf = getPrimeFactors(num);
    for (size_t i = 0; i < pf.size(); ++i) {
        cout << pf[i];
        if (i < pf.size() - 1) cout << " ";
    }
    cout << "\n";
    return 0;
}
