#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    while(n != 1) {
        if(answer >= 400)
            return -1;
        
        ++answer;
        
        if(n % 2 == 0) {
            n /= 2;
            continue;
        } else
        
        n = n * 3 + 1;        
    }
    
    return answer;
}