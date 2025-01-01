#include <iostream>
using namespace std;

int main(){
    int live_d = 1000;
    int M[10];
    for (int d_M = 0; d_M < 10; d_M++){
        cin >> M[d_M];
    }
    int N[10];
    for (int d_N = 0; d_N < 10; d_N++){
        cin >> N[d_N];
    }
    int c_g = M[0];
    int c_o = N[0];
    int A;
    int B=1000;
    int S;
    for (int g_d = 0; g_d < 10; g_d++){
        if (c_g >= M[g_d]){
            c_g = M[g_d];
            A = g_d + 1;
        }
    }
    for (int o_d = A - 1; o_d < 10; o_d++){
        if (B >= o_d + 1){
            if (c_o >= N[o_d]){
                c_o = N[o_d];
                B = o_d + 2;
            }
        }
    }
    B = B-1;
    S = live_d*(B-A) + c_g + c_o ;
    cout << A << " " << B << " " << S;
}
