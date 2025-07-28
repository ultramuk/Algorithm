#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int i=0; i<arr1.size(); i++) {
        vector<int> ans;
        for(int k=0; k<arr2[0].size(); k++) {
            int sum = 0;
            for(int j=0; j<arr2.size(); j++) {
                sum += arr1[i][j] * arr2[j][k];
            }
            ans.push_back(sum);
        }
        answer.push_back(ans);
    }
    
    
    return answer;
}