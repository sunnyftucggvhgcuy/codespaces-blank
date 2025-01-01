#include <iostream>
#include <string>
using namespace std;

int main(){
    string S;
    getline (cin,S);
    int k;
    cin >> k;
    for (int n=0; n<S.length(); n++){
        char word =S[n];
        if (word >= 'A' && word <= 'Z'){
            word = (word - 'A' + k) % 26 + 'A';
        } else if (word >= 'a' && word <= 'z'){
            word = (word - 'a' + k) % 26 + 'a';
        }
        cout << word;
    }
}
