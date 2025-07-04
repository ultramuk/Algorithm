#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n) {
    std::vector<int> vec;

    while(n > 0) {
        vec.push_back(n % 3);
        n /= 3;
    }
    
    long long answer = 0;
    for(int i=vec.size()-1, j=0; i>=0; i--, j++) {
        answer += vec[i] * pow(3, j);
    }
           
    return answer;
}