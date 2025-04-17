#include <iostream>
#include <set>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;
    
    set<int> primes;
    for (int i = a; i <= b; i++) {
        if (isPrime(i)) {
            primes.insert(i);
        }
    }
    
    if (primes.empty()) {
        cout << "no" << endl;
    } else {
        for (int prime : primes) {
            cout << prime << " ";
        }
        cout << endl;
    }
    
    return 0;
}
