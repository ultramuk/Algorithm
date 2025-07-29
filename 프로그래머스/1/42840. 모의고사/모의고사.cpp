#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> s1 = { 1, 2, 3, 4, 5 };
    vector<int> s2 = { 2, 1, 2, 3, 2, 4, 2, 5 };
    vector<int> s3 = { 3, 3, 1, 1, 2, 2, 4, 4, 5, 5 };
    
    int c1 = 0, c2 = 0, c3 = 0;
    for(int i=0; i<answers.size(); i++) {
        int a = answers[i];
        
        if(a == s1[i % s1.size()]) c1++; 
        if(a == s2[i % s2.size()]) c2++; 
        if(a == s3[i % s3.size()]) c3++; 
    }
    
    vector<int> answer;
    if(max({c1, c2, c3}) == c1) answer.push_back(1);
    if(max({c1, c2, c3}) == c2) answer.push_back(2);
    if(max({c1, c2, c3}) == c3) answer.push_back(3);
    
    return answer;
}