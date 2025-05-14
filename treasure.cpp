#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // 讀取箱子數量
    int N;
    cin >> N;
    
    // 讀取每個箱子上的數字
    vector<int> boxes(N);
    for (int i = 0; i < N; i++) {
        cin >> boxes[i];
    }
    
    // 1. 找到所有箱子中的最小值 X
    int X = *min_element(boxes.begin(), boxes.end());
    
    // 2. 確定Y的位置
    int Y_index = -1;
    
    // 檢查是否有多個箱子有最小值X
    vector<int> minValuePositions;
    for (int i = 0; i < N; i++) {
        if (boxes[i] == X) {
            minValuePositions.push_back(i);
        }
    }
    
    if (minValuePositions.size() > 1) {
        // 如果有多個箱子有最小值X，從最右邊的箱子開始向左數第X個箱子
        int rightmostPos = minValuePositions.back();
        
        // 從右邊的箱子向左數，不包括起始箱子
        if (rightmostPos - X < 0) {
            Y_index = 0;  // 如果超出範圍，取第一個箱子
        } else {
            Y_index = rightmostPos - X;
        }
    } else {
        // 如果只有一個箱子有最小值X，從該箱子開始向右數第X個箱子
        int pos = minValuePositions[0];
        
        // 從最小值箱子向右數，不包括起始箱子
        if (pos + X >= N) {
            Y_index = N - 1;  // 如果超出範圍，取最後一個箱子
        } else {
            Y_index = pos + X;
        }
    }
    
    // 3. 獲取Y
    int Y = boxes[Y_index];
    
    // 4. 從最左邊箱子開始，向右數到第Y個箱子，得到密碼Z
    int Z_index = Y - 1;  // 第Y個箱子的索引是Y-1
    
    // 確保Z_index在範圍內
    if (Z_index < 0) {
        Z_index = 0;
    }
    if (Z_index >= N) {
        Z_index = N - 1;
    }
    
    int Z = boxes[Z_index];
    
    // 輸出結果
    cout << Z << endl;
    
    return 0;
}
