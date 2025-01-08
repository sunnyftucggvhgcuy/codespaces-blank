#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
vector<int> nums;

int num =0;

while(true){
    cin >>num;
    
    if(num==-1){
        break;
    }
    
    nums.push_back(num);
}
vector<int> n_nums;

while(!nums.empty()){
    
auto mini = min_element(nums.begin(),nums.end());

n_nums.push_back(*mini);

nums.erase(mini);
}

for(int a :n_nums){
     cout << a ;
     if(a != *n_nums.end()){
         cout << " ";
     }
}

}
