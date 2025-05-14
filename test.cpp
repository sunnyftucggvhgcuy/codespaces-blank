#include <iostream>
#include <vector>
using namespace std;

int main() {
    // 讀取考生六科成績
    vector<int> scores(6);
    for (int i = 0; i < 6; i++) {
        cin >> scores[i];
    }
    
    // 讀取六科的五標級分
    vector<vector<int>> standards(6, vector<int>(5));
    for (int i = 0; i < 6; i++) {  // 六科
        for (int j = 0; j < 5; j++) {  // 每科五個標準
            cin >> standards[i][j];
        }
    }
    
    // 判斷每科成績所達標準
    for (int i = 0; i < 6; i++) {
        int score = scores[i];
        if (score == 0) {
            cout << "X" << endl;  // 未報考或缺考
            continue;
        }
        
        // 取得當前科目的五標
        vector<int>& subject_standards = standards[i];
        
        // 分別對應：頂標、前標、均標、後標、底標
        if (score >= subject_standards[0]) {
            cout << "A" << endl;  // 頂標
        } else if (score >= subject_standards[1]) {
            cout << "B" << endl;  // 前標
        } else if (score >= subject_standards[2]) {
            cout << "C" << endl;  // 均標
        } else if (score >= subject_standards[3]) {
            cout << "D" << endl;  // 後標
        } else if (score >= subject_standards[4]) {
            cout << "E" << endl;  // 底標
        } else {
            cout << "F" << endl;  // 低於底標
        }
    }
    
    return 0;
}
