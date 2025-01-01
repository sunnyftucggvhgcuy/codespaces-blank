#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    int* S = new int[N];
    for (int c = 0; c < N; c++){
        cin >> S[c];
    }
    int R, C;
    cin >> R >> C;
    int a_array[R][C];
    for (int c_x = 0; c_x < R; c_x++){
        for (int c_y = 0; c_y < C; c_y++){
            cin >> a_array[c_x][c_y];
        }
    }
    for (int c_S = 0; c_S < N; c_S++){
        bool t_f = false;
        int f_S = S[c_S];
        for (int array_x = 0; array_x < R; array_x++){
            for (int array_y = 0; array_y < C; array_y++){
                if (f_S == a_array[array_x][array_y]){
                    t_f = true;
                    cout << array_x + 1 << " " << array_y + 1 << "\n";
                    break;
                }
            }
        }
        if (t_f == false){
            cout << "-1" << "\n";
        }
    }
    delete[] S;
}
