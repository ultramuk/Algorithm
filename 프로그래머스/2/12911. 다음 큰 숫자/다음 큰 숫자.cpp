#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int func(int n) {
    vector<int> vec;
    
    while(n > 0) {
        vec.push_back(n%2);
        n/=2;
    }
    
    return count(vec.begin(), vec.end(), 1);
}

int solution(int n) {
    int num = func(n);
    for(int i=n+1; i<=1000000; i++) {
        if(num == func(i))
            return i;
    }
}