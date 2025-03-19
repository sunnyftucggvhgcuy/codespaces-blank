#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;

struct Point {
    double x, y;
};

// 計算兩點間的歐氏距離
double calculateDistance(Point p1, Point p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

int main() {
    int n;
    cin >> n;
    
    // 如果只有一個點，直接輸出"0"
    if (n <= 1) {
        cout << "0" << endl;
        return 0;
    }
    
    // 讀取所有點的座標
    vector<Point> points(n);
    for (int i = 0; i < n; i++) {
        cin >> points[i].x >> points[i].y;
    }
    
    double minDistance = INT_MAX;
    double maxDistance = 0;
    pair<int, int> nearestPair, farthestPair;
    
    // 遍歷所有點對找出最近和最遠的點對
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dist = calculateDistance(points[i], points[j]);
            
            // 更新最近點對
            if (dist < minDistance) {
                minDistance = dist;
                nearestPair = make_pair(i, j);
            }
            
            // 更新最遠點對
            if (dist > maxDistance) {
                maxDistance = dist;
                farthestPair = make_pair(i, j);
            }
        }
    }
    
    // 輸出結果
    cout << nearestPair.first << " " << nearestPair.second << " " << minDistance << endl;
    cout << farthestPair.first << " " << farthestPair.second << " " << maxDistance << endl;
    
    return 0;
}
