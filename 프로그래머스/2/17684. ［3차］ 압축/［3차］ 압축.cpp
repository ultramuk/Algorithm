#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(string msg) {
    unordered_map<string, int> dict;
    
    int num = 1;
    for(char c = 'A'; c <= 'Z'; c++) {
        string str = "";
        str += c;
        dict[str] = num++;
    }
    
    vector<int> answer;
    for(int i = 0; i < msg.size();){
        string str = "";
        while(dict.find(str + msg[i]) != dict.end())
            str += msg[i++];

        answer.push_back(dict[str]);
        
        if(i < msg.size())
            dict[str + msg[i]] = dict.size() + 1;
    }
    
    return answer;
}