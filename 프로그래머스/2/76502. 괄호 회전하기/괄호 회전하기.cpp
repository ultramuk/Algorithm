#include <string>
#include <vector>
#include <stack>
#include <map>

using namespace std;

bool func(string& s) {
    stack<char> stk;
    map<char, char> mp = {{'(',')'}, {'{','}'}, {'[',']'}};
    
    for(auto c : s) {
        if(stk.empty() || mp.find(c) != mp.end()) {
            stk.push(c);
            continue;
        }

        if(mp[stk.top()] == c)
            stk.pop();
        else
            return false;
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