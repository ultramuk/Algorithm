#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    
    while(n >= a) {
        int x = n / a * b;
        
        answer += x;
        n = x + n % a;
    }
    
    return answer;
}