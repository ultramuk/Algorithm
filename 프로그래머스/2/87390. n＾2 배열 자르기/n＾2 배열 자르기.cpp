#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {    
    int left_i = left / n;
    int left_j = left % n;
    
    int right_i = right / n;
    int right_j = right % n;
    
    vector<int> vec;
    for(int i=left_i+1; i<=right_i+1; i++) {
        for(int j=1; j<=n; j++) {
            if(j<=i) vec.push_back(i);
            else vec.push_back(j);
        }
    }
    
    vector<int> answer;
    for(int i=left_j; i<vec.size()-(n-right_j-1); i++) {
        answer.push_back(vec[i]);
    }
    
    return answer;
}