#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    // step 1
    vector<int> v;    
    for(int i=0; i<dungeons.size(); i++)
        v.push_back(i);
    
    // step 2
    vector<vector<int>> vec;
    do {
        vector<int> temp;
        for(auto it = v.begin(); it != v.end(); it++)
            temp.push_back(*it);
        vec.push_back(temp);
    } while(next_permutation(v.begin(), v.end()));
    
    // step 3
    int answer = -1;
    for(auto& ve : vec) {
        int kk = k;
        
        int ans = 0;
        for(int i=0; i<ve.size(); i++) { 
            auto j = ve[i];
            if(dungeons[j][0] > kk) break;
            kk -= dungeons[j][1];
            ans++;
        }
        answer = max(answer, ans);
    }
    return answer;
}