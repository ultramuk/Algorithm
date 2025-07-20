#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<string> before_words = {words[0]};

    char ch = words[0][words[0].length()-1];
    
    for(int i=1; i<words.size(); i++) {
        // 끝말잇기 조건 체크
        if(words[i][0] != ch) {
            return {i%n+1, i/n+1};
        }
        ch = words[i][words[i].length()-1];
        
        // 중복 체크
        if(find(before_words.begin(), before_words.end(), words[i]) != before_words.end()) {
            return {i%n+1, i/n+1};
        }
        before_words.push_back(words[i]);
    }

    return {0, 0};
}