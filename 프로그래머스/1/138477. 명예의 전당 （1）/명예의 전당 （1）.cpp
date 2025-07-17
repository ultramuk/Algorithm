#include <string>
#include <vector>
#include <deque>
#include <algorithm>
using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    deque<int> deq;
    
    for(auto s : score) {
        if(deq.size() < k) {
            deq.push_back(s);
        
            sort(deq.begin(), deq.end());
        }
        else {
            if(deq.front() < s) {
                deq.push_back(s);
                sort(deq.begin(), deq.end());
                deq.pop_front();
            }
        }
        
        answer.push_back(deq.front());       
    }
    
    return answer;
}