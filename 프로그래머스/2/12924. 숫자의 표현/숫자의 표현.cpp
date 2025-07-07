#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = 1;

    for(int i=1; i<n/2+1; i++) {
        int sum = i, j = i;

        while(n > sum) {
            sum += ++j;
            if(sum == n)
                count++;
        }
    }
    
    return count;
}