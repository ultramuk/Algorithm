#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(vector<int> queue1, vector<int> queue2) {
    long long sum1 = 0, sum2 = 0;
    queue<int> q1;
    queue<int> q2;
    
    for(int i=0; i<queue1.size(); i++) {
        q1.push(queue1[i]);
        q2.push(queue2[i]);
        
        sum1 += queue1[i];
        sum2 += queue2[i];
    }
    
    if((sum1 + sum2) % 2)
        return -1;
    
    int answer = 0;
    while(!q1.empty() && !q2.empty()) {
        //만약 이동 횟수가 전체 두 큐의 2배보다 크다면 - 이미 큐 전체를 돌았는데 같지 않을때 실패 반환
        if(answer / 2 > q1.size() + q2.size())
            return -1;

        if(sum1 > sum2) {
            sum1 -= q1.front();
            sum2 += q1.front();
            q2.push(q1.front());
            q1.pop();
            answer++;
        } else if (sum1 < sum2) {
            sum2 -= q2.front();
            sum1 += q2.front();
            q1.push(q2.front());
            q2.pop();
            answer++;
        } else {
            return answer;
        }
    }
    
    if(sum1 == sum2)
        return answer;
    
    return -1;
}