#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    
    int min, max;
    if(a > b) {
        max = a;
        min = b;    
    }
    else {
        max = b;
        min = a;    
    }
        
    
    for(int i=min; i<=max; i++) {
        answer += i;
    }    
    
    return answer;
}