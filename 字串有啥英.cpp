#include <iostream>
#include <string>
#include <set>

using namespace std;

int main() {
    string input;

    // 讀取整行輸入
    getline(cin, input);

    // 使用 set 來自動排序並去除重複字母
    set<char> letters;

    // 將輸入句子中的字母加入 set
    for (char c : input) {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
            letters.insert(tolower(c));
        }
    }

    // 輸出排序後不重複的字母
    for (char c : letters) {
        cout << c;
    }
    cout << endl;

    return 0;
}
