#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(int brown, int yellow) {
    std::vector<int> answer(2,0);
    auto sum = brown + yellow;
    
    for(int height=3; height<sum; ++height) {
        if(sum % height) continue;
        
        auto width = sum / height;
        
        if((width-2) * (height-2) == yellow) {
            answer[0] = width;
            answer[1] = height;
            break;
        }
    }    
    
    return answer;
}