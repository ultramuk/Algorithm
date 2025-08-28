#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

int solution(vector<int> order) {
    int j = 0;
    stack<int> stk;
    int answer = 0;
    
    for(int i=1, j=0; i<=order.size(); i++) {
        if(j < order.size() && i == order[j]) {
            answer++;
            j++;
        } else {
            stk.push(i);
        }

        while(!stk.empty() && j < order.size() && order[j] == stk.top()) {            
            stk.pop();
            answer++;
            j++;
        }        
    }
    
    return answer;
}