#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int max_value = 0;
    int min_value = 0;
    
    for(auto& size : sizes) {
        int max = size[0] >= size[1] ? size[0] : size[1];
        int min = size[0] >= size[1] ? size[1] : size[0];       
        
        max_value = max_value >= max ? max_value : max;
        min_value = min_value >= min ? min_value : min;
    }    
    
    return max_value * min_value;
}