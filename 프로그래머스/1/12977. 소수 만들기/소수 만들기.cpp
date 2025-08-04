#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int solution(vector<int> nums) {
    int sum = 0;
    for(auto n : nums)
        sum += n;
    
    vector<bool> isPrime(sum+1, true);
    isPrime[0] = false;
    isPrime[1] = false;
    
    for(int i=2; i*i <= sum; i++) {
        if(!isPrime[i]) continue;
        
        for(int j=i*i; j <= sum; j+=i)
            isPrime[j] = false;
    }
            
    int answer = 0;
    for(int i=0;i<nums.size();i++){
        for(int j=i+1;j<nums.size();j++){
            for(int k=j+1;k<nums.size();k++){
                auto sum = nums[i] + nums[j] + nums[k];
                if(isPrime[sum])
                    answer++;
            }
        }
    }
    return answer;
}