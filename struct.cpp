#include <iostream>
#include <vector>
struct Student {
    int scores[5]; 
    int average;   
};

int main() {
    int n;
    cin >> n;
    vector<Student> students(n);
    int subjectSums[5] = {0};
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> students[i].scores[j];
            subjectSums[j] += students[i].scores[j];
        }
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].scores[j];
        }
        students[i].average = sum / 5;
        
        cout << students[i].average << std::endl;
    }
        for (int j = 0; j < 5; j++) {
        cout << subjectSums[j] / n;
        if (j < 4) {
            cout << " ";
        }
    }
    cout << std::endl;
    
    return 0;
}
    
