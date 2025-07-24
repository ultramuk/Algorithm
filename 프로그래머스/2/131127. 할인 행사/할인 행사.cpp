#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    map<string, int> map_list;
    
    for(int i=0; i<want.size(); i++) {
        map_list[want[i]] = number[i];
    }
    
    for(int i=0; i<discount.size()-9; i++) {
        bool is_continue = true;
        auto mp = map_list;
        
        for(int j=0; j<10; j++) {
            if(mp.find(discount[i+j]) == mp.end()) {
                is_continue = false;
                break;
            }
            mp[discount[i+j]]--;
        }
        if(is_continue == false)
            continue;
        
        bool is_answer = true;
        for(auto m : mp) {
            if(m.second != 0) {
                is_answer = false;
            }
        }
        
        if(is_answer) {
            answer++;
        }
    }
    
    return answer;
}