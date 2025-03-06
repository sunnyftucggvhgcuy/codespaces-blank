#include <iostream>
#include <vector>


struct Student {
    int scores[5]; 
    int average;   
};

int main() {
    int n;
    std::cin >> n;
    
    
    std::vector<Student> students(n);
    
    
    int subjectSums[5] = {0};
    
    
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < 5; j++) {
            std::cin >> students[i].scores[j];
            
            subjectSums[j] += students[i].scores[j];
        }
        
        
        int sum = 0;
        for (int j = 0; j < 5; j++) {
            sum += students[i].scores[j];
        }
        students[i].average = sum / 5;
        
        
        std::cout << students[i].average << std::endl;
    }
    
    
    for (int j = 0; j < 5; j++) {
        std::cout << subjectSums[j] / n;
        if (j < 4) {
            std::cout << " ";
        }
    }
    std::cout << std::endl;
    
    return 0;
}
