#include <string>
#include <vector>
#include <iostream>

using namespace std;

string WORD;

bool func(int& num, string s) {
    if(s == WORD)
        return true;
    
    if(s.size() == 5)
        return false;
    
    for(auto c : {'A', 'E', 'I', 'O', 'U'})
    {
        s += c;
        num++;
        if(s == WORD)
            return true;
        if(func(num, s))
            return true;
               
        s.pop_back();
    }
    
    return false;
}

int solution(string word) {
    WORD = word;    
    int answer = 0;
    func(answer, "");
    
    return answer;
}