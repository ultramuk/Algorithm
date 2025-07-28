#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> vec)
{
    int size = vec.size() / 2;
    
    sort(vec.begin(), vec.end());
    
    vec.erase(unique(vec.begin(), vec.end()), vec.end());
    
    return size < vec.size() ? size : vec.size();
}