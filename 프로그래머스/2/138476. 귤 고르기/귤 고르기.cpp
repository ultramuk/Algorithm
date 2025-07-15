#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    map<int, long long> mp;
    
    for(auto t : tangerine) {
        if(mp.find(t) == mp.end())
            mp[t] = 1;
        else
            mp[t]++;
    }
    
    vector<pair<int, long long>> vec;
    for(auto& m : mp) {
        vec.push_back(m);
    }
    
    sort(vec.begin(), vec.end(), [](pair<int, long> a, pair<int, long> b){ return a.second > b.second; });
    
    int answer = 0;
    for(auto v : vec){
        if(k <= 0) break;
        
        k -= v.second;
        answer++;
    }
    
    return answer;
}