#include <string>
#include <vector>

using namespace std;

string solution(string str) {
    string answer = "";
    
    answer.push_back(toupper(str[0]));
    for(int i=1; i<str.size(); i++) {
        if(str[i-1] == ' ')
            answer.push_back(toupper(str[i]));
        else
            answer.push_back(tolower(str[i]));
    }
    
    return answer;
}