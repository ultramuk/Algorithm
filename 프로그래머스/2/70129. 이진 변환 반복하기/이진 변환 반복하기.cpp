#include <string>
#include <vector>

using namespace std;

string to_binary(int num) {
    string vec = "";
    
    while(num >= 1) {
        vec += to_string(num % 2);
        num /= 2;
    }
    
    return vec;
}

vector<int> solution(string str) {
    vector<int> answer(2, 0);
    
    while(str.size() > 1) {
        answer[0]++;
        string str_copy;
        for(auto s : str) {
            if(s == '0')
                answer[1]++;
            else
                str_copy.push_back(s);
        }
        
        str = to_binary(static_cast<int>(str_copy.size()));
    }
    
    return answer;
}