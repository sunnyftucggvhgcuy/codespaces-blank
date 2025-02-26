#include <iostream>
#include <queue>
#include <stack>

int main() {
    std::queue<int> q;  // 建立隊列
    std::stack<int> s;  // 建立堆疊
    int num;
    int choice;

    // 使用者輸入數字到隊列
    std::cout << "請輸入要加入隊列的數字數量: ";
    int qSize;
    std::cin >> qSize;
    
    std::cout << "請輸入 " << qSize << " 個數字加入隊列:\n";
    for (int i = 0; i < qSize; i++) {
        std::cin >> num;
        q.push(num);
    }

    // 使用者輸入數字到堆疊
    std::cout << "請輸入要加入堆疊的數字數量: ";
    int sSize;
    std::cin >> sSize;
    
    std::cout << "請輸入 " << sSize << " 個數字加入堆疊:\n";
    for (int i = 0; i < sSize; i++) {
        std::cin >> num;
        s.push(num);
    }

    // 合併並顯示結果
    std::cout << "合併結果: ";
    while (!q.empty() || !s.empty()) {
        // 從隊列取出數字（如果有）
        if (!q.empty()) {
            std::cout << q.front() << " ";
            q.pop();
        }
        
        // 從堆疊取出數字（如果有）
        if (!s.empty()) {
            std::cout << s.top() << " ";
            s.pop();
        }
    }
    std::cout << std::endl;

    return 0;
}
