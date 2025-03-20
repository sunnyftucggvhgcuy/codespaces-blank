#include <iostream>
using namespace std;

int main() {
    int m1, m2, r;
    
    // 輸入三個整數：m1, m2, r
    cin >> m1 >> m2 >> r;
    
    // 萬有引力常數 G = 6
    const int G = 6;
    
    // 計算力的大小 F = G * m1 * m2 / r^2
    int F = (G * m1 * m2) / (r * r);
    
    // 輸出結果
    cout << F << endl;
    
    return 0;
}
