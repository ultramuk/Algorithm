#include <string>
#include <vector>
using namespace std;

string func(int n, int k) {
    string s = "";
    while(n != 0) {
        s = to_string(n % k) + s;
        n /= k;
    }
    return s;
}

bool is_prime(long long n) {
    if(n < 2) return false;
    if(n % 2 == 0) return n == 2;

    for(int i=3; i <= n / i; i+=2) {
        if(n % i == 0)
            return false;
    }
    return true;
}

int solution(int n, int k) {
    auto str = func(n, k);
    
    int answer = 0;
    string temp = "";
    for(auto s : str) {
        if(s == '0' && !temp.empty()) {
            if(is_prime(stol(temp)))
                answer++;
                
            temp = "";
            continue;
        }        

        if(s == '0') {
            continue;
        }
        
        temp += s;
    }
    
    if(!temp.empty() && is_prime(stol(temp)))
        answer++;
    
    
    return answer;
}