#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    std::vector<int> vec(n+1, 0);
    
    vec[1] = 1;
    vec[2] = 2;
    
    for(int i=3; i<n+1; i++)
        vec[i] = (vec[i-1] + vec[i-2]) % 1000000007;
    
    return vec[n];
}