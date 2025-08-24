#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    priority_queue<int, vector<int>, greater<int>> pq(scoville.begin(), scoville.end());
    
    int answer = 0;
    while(pq.top() < K) {
        if(pq.size() < 2)
            return -1;
        
        auto first = pq.top(); pq.pop();
        auto second = pq.top(); pq.pop();
        
        pq.push(first+2*second);
        answer++;
    }
    
    return answer;
}