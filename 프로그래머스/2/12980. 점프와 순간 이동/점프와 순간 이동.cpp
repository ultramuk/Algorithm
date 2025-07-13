#include <iostream>
using namespace std;

int solution(int n)
{
    int x = 1;
    
    while(n > 1) {
        if(n % 2) {
            n--;
            x++;
        }
        
        n /= 2;
    }

    return x;
}