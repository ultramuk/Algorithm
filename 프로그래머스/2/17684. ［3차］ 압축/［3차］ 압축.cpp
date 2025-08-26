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
    string curr = "";
    for(int i=0; i<msg.length(); i++) {
        curr += msg[i];
        
        if(dict.find(curr) == dict.end()) {
            dict[curr] = num++;
            curr = curr.substr(0, curr.length()-1);
            
            answer.push_back(dict[curr]);
            curr = "";
            i--;
        }
    }
    answer.push_back(dict[curr]);
    
    return answer;
}