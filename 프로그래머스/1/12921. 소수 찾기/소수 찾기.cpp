#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n) {
    vector<bool> isPrime(n+1, true);
    
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2; i*i < n+1; i++) {
        if(isPrime[i]) {
            for(int j = i*i; j <= n; j+=i) {
                isPrime[j] = false;
            }
        }
    }
    
    return count(isPrime.begin(), isPrime.end(), true);
}