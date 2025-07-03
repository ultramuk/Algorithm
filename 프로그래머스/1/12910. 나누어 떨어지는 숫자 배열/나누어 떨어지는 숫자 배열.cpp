#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    
    for(auto a : arr) {
        if(a % divisor) continue;
        
        answer.push_back(a);
    }
    
    if(answer.empty()) {
        answer.push_back(-1);
        return answer;
    }
    
    std::sort(answer.begin(), answer.end());
    
    return answer;
}