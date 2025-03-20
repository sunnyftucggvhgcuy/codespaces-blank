#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N; // 搭乘次數
    
    vector<int> fares(N);
    int total_fare = 0;
    
    // 讀取每次搭乘的票價
    for (int i = 0; i < N; i++) {
        cin >> fares[i];
        total_fare += fares[i];
    }
    
    // 計算現金回饋
    double cashback_rate = 0;
    if (N >= 11 && N <= 20) {
        cashback_rate = 0.05; // 5% 回饋
    } else if (N >= 21 && N <= 40) {
        cashback_rate = 0.10; // 10% 回饋
    } else if (N >= 41) {
        cashback_rate = 0.15; // 15% 回饋
    }
    
    // 計算回饋金額
    double cashback = total_fare * cashback_rate;
    
    // 計算最終費用
    double final_fare = total_fare - cashback;
    
    // 決定是否使用TPASS
    if (final_fare > 1200) {
        cout << 1200 << endl;
    } else {
        // 四捨五入至整數
        cout << round(final_fare) << endl;
    }
    
    return 0;
}
