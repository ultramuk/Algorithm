#include <string>
#include <vector>
#include <stack>
#include <iostream>

using namespace std;

bool func(string& s) {
    stack<char> stk;
    
    for(auto c : s) {
        if(stk.empty() || c == '(' || c == '{' || c == '[') {
            stk.push(c);
            continue;
        }
        
        if(c == ')') {
            if(stk.top() == '(')
                stk.pop();
            else
                return false;
        } else if (c == '}') {
            if(stk.top() == '{')
                stk.pop();
            else
                return false;            
        } else if (c == ']') {
            if(stk.top() == '[')
                stk.pop();
            else
                return false;
        }
    }
    
    return stk.empty();
}

int solution(string s) {
    int answer = 0;
    int n = s.length();
    
    while(n--) {
        if(func(s)) answer++;
        
        s = s.substr(1) + s[0];
    }
    
    return answer;
}