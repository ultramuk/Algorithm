#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> solution(string s) {
    unordered_map<int, int> mp;
    
    // 문자열 분리
    string temp = "";
    for(auto c : s) {
        if(isdigit(c))
            temp += c;
        else if (temp.empty())
            continue;
        else {
            mp[stoi(temp)]++;
            temp = "";
        }
    }
    
    // 정렬해주기 위해서 vector로 변환
    vector<pair<int, int>> vec(mp.begin(), mp.end());
    
    sort(vec.begin(), vec.end(), [](auto a, auto b){
        return a.second > b.second; 
    });
    
    vector<int> answer;
    for(auto v : vec)
        answer.push_back(v.first);
    
    return answer;
}