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
    
    for(int i=0; i<s.length(); i++) {
        string str = "";
        for(int j = i; j < i+s.length(); j++) {
            str += s[j % s.length()];
        }
        
        if(func(str))
            answer++;
    }
    
    return answer;
}