#include <iostream>
#include <string>
#include <stack>

using namespace std;

int solution(string str)
{
    stack<char> stk;
    
    for(auto s : str) {
        if(stk.empty()) {
            stk.push(s);
            continue;
        }
                
        if(stk.top() == s)
            stk.pop();
        else
            stk.push(s);
    }

    return stk.empty();
}