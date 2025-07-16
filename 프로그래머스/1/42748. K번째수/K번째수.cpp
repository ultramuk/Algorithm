#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(auto command : commands) {
        vector<int> vec;
        for(int i=command[0]-1; i<command[1]; ++i) {
            vec.push_back(array[i]);
        }
        
        sort(vec.begin(), vec.end());
        answer.push_back(vec.at(command[2]-1));
    }    
    
    return answer;
}