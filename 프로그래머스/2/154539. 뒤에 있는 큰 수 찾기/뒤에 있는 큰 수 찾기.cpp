#include <string>
#include <vector>
#include <stack>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer(numbers.size(), -1);
    stack<int> stk;
    
    for(int i=numbers.size()-1; i>=0; i--) {
        while(!stk.empty() && stk.top() <= numbers[i])
            stk.pop();
        
        if(!stk.empty())
            answer[i] = stk.top();
        
        stk.push(numbers[i]);
    }
    
    return answer;
}