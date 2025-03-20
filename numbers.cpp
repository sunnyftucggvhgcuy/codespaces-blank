#include <iostream>
#include <cmath>
using namespace std;

// 判斷一個數是否為質數
bool isPrime(int num) {
    if (num <= 1) return false;
    if (num <= 3) return true;
    if (num % 2 == 0 || num % 3 == 0) return false;
    
    // 檢查所有可能的因數
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0)
            return false;
    }
    return true;
}

// 找出大於N的第一個質數
int findNextPrime(int N) {
    int next = N + 1;
    while (!isPrime(next)) {
        next++;
    }
    return next;
}

// 找出大於N的第一個平方數
int findNextSquare(int N) {
    int root = ceil(sqrt(N));
    return root * root;
}

// 找出大於N的第一個立方數
int findNextCube(int N) {
    int root = ceil(cbrt(N));
    return root * root * root;
}

int main() {
    int N;
    cin >> N;
    
    int nextPrime = findNextPrime(N);
    int nextSquare = findNextSquare(N);
    int nextCube = findNextCube(N);
    
    cout << nextPrime << " " << nextSquare << " " << nextCube << endl;
    
    return 0;
}
