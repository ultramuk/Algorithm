#include <string>
#include <vector>
#include <numeric>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    auto size = p.length();
    
    for(int i = 0; i < t.length() - size + 1; ++i) {
        if(stol(t.substr(i, size)) <= stol(p))
            answer++;
    }

    return answer;
}