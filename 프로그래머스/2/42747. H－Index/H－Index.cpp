#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    for(int answer=1000; answer>=0; answer--) {
        int count = 0;
        for(auto c : citations)
            if(answer <= c) count++;
        
        if(count >= answer) return answer;
    }
    
    return 0;
}