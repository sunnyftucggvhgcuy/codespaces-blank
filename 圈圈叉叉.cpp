#include <iostream>

int main() {
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}};
    char player = 'O';
    int row, col;
    bool gameOver = false;
    int moves = 0;
    
    std::cout << "圈圈叉叉遊戲\n";
    
    while (!gameOver) {
        // 顯示棋盤
        std::cout << "\n";
        std::cout << "  1 2 3\n";
        for (int i = 0; i < 3; i++) {
            std::cout << i+1 << " " << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "\n";
            if (i < 2) std::cout << "  -+-+-\n";
        }
        
        // 玩家輸入
        std::cout << "\n玩家" << player << "：請輸入位置(行 列)：";
        std::cin >> row >> col;
        row--; col--;
        
        // 檢查移動
        if (row >= 0 && row < 3 && col >= 0 && col < 3 && board[row][col] == ' ') {
            board[row][col] = player;
            moves++;
            
            // 檢查獲勝
            bool win = false;
            // 檢查行
            if (board[row][0] == player && board[row][1] == player && board[row][2] == player) win = true;
            // 檢查列
            if (board[0][col] == player && board[1][col] == player && board[2][col] == player) win = true;
            // 檢查對角線
            if (row == col && board[0][0] == player && board[1][1] == player && board[2][2] == player) win = true;
            if (row + col == 2 && board[0][2] == player && board[1][1] == player && board[2][0] == player) win = true;
            
            if (win) {
                // 再次顯示棋盤
                std::cout << "\n";
                std::cout << "  1 2 3\n";
                for (int i = 0; i < 3; i++) {
                    std::cout << i+1 << " " << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "\n";
                    if (i < 2) std::cout << "  -+-+-\n";
                }
                std::cout << "\n玩家" << player << "獲勝！\n";
                gameOver = true;
            } else if (moves == 9) {
                // 再次顯示棋盤
                std::cout << "\n";
                std::cout << "  1 2 3\n";
                for (int i = 0; i < 3; i++) {
                    std::cout << i+1 << " " << board[i][0] << "|" << board[i][1] << "|" << board[i][2] << "\n";
                    if (i < 2) std::cout << "  -+-+-\n";
                }
                std::cout << "\n平局！\n";
                gameOver = true;
            } else {
                // 切換玩家
                player = (player == 'O') ? 'X' : 'O';
            }
        } else {
            std::cout << "無效的移動，請重試！\n";
        }
    }
    
    return 0;
}
