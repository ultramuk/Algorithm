#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    deque<int> deq_p, deq_s;
    
    for(size_t i=0; i<progresses.size(); ++i) {
        deq_p.push_back(progresses[i]);
        deq_s.push_back(speeds[i]);
    }
    
    vector<int> answers;
    while(!deq_p.empty()) {
        for(size_t i=0; i<deq_p.size(); ++i) {
            deq_p[i] += deq_s[i];
        }
        
        if(deq_p.front() < 100) continue;
        
        int answer=0;        
        while(true) {
            if(deq_p.empty() || deq_s.empty())
                break;            
            
            if(deq_p.front() < 100)
                break;
            
            deq_p.pop_front();
            deq_s.pop_front();
            
            ++answer;
        }
        answers.push_back(answer);
    }
    
    return answers;
}