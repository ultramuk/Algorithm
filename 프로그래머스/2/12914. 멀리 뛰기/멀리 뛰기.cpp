#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long array[2000];
    
    array[0] = 0;
    array[1] = 1;
    array[2] = 2;
    
    for(int i=3; i<2000; i++)
        array[i] = (array[i-1] + array[i-2]) % 1234567;    
    
    return array[n];
}