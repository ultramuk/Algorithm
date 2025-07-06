#include <string>
#include <iostream>
#include <stack>

using namespace std;

bool solution(string str)
{
    stack<char> stk;
    for(const auto s : str) {
        if(s == '(') {
            stk.push(s);    
            continue;
        }
        
        if(stk.empty())
            return false;
        
        if(stk.top() == ')')
            return false;
        
        stk.pop();
    }
    
    if(!stk.empty())
        return false;

    return true;
}