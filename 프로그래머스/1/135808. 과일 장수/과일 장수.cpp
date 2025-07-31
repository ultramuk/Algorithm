#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    sort(score.begin(), score.end(), [](int a, int b){
        return a > b;
    });
    
    int answer = 0;
    for(int i=0; i+m<=score.size(); i+=m) {
        auto min_val = score[i];
        for(int j=1; j<m; ++j)
            min_val = min(min_val, score[i+j]);
        
        answer += min_val * m;
    }
    
    return answer;
}