#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    if(sqrt(n) - static_cast<int>(sqrt(n)))
        return -1;
    
    return pow((sqrt(n)+1), 2);
}