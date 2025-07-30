#include <string>
#include <vector>
using namespace std;

int solution(int n, int m, vector<int> section) {
    vector<bool> vec(n+1+m, false);
    
    for(auto s : section)
        vec[s] = true;
    
    int answer = 0;
    for(int i=1; i<vec.size(); i++) {
        if(vec[i] == false) continue;
        
        for(int j=0; j<m; j++) {
            vec[i+j] = false;
        }
        answer++;
    }
    
    
    return answer;
}