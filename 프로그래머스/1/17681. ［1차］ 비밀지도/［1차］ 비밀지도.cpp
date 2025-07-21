#include <string>
#include <vector>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;
    
    for(int i=0; i<n; i++) {
        string row = "";
        int line = arr1[i] | arr2[i];

        for(int j=0; j<n; j++) {
            row = ((line & 1) ? "#" : " ") + row;
            line = line >> 1;
        }
        
        answer.push_back(row);
    }
    
    return answer;
}