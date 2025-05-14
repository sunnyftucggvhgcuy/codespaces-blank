#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> nums;
    int num;
    
    cout << endl;
    
    while (cin >> num && num != 0) {
        nums.push_back(num);
    }
    
    sort(nums.begin(), nums.end(), greater<int>());
    nums.erase(unique(nums.begin(), nums.end()), nums.end());
    
    if (nums.size() < 2) {
        cout << endl;
    } else {
        cout << nums[1] << endl;
    }
    
    return 0;
}
