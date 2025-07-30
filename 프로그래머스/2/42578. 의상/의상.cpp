#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) { 
    map<string, int> mp;
    for(auto cloth : clothes) {
        if(mp.find(cloth[1]) == mp.end())
            mp[cloth[1]] = 1;
        else
            mp[cloth[1]]++;
    }
    
    int answer = 1;    
    for(auto m : mp) {
        answer *= m.second + 1;
    }
    return answer - 1;
}