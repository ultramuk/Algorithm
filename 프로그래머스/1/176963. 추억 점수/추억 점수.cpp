#include <string>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photos) {
    vector<int> answer;
    unordered_map<string, int> mp;
    
    for(int i=0; i<name.size(); ++i) {
        mp[name[i]] = yearning[i];
    }    
    
    for(auto photo : photos) {
        int score = 0;
        
        for(auto ph : photo) {
            if(mp.find(ph) == mp.end())
                continue;
            score += mp.at(ph);
        }        
        
        answer.push_back(score);
    }
    
    return answer;
}