#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<int> topping) {
    map<int, int> m1, m2;
    
    for(int i=0; i<topping.size(); i++) {
        m2[topping[i]]++;
    }
    
    int answer = 0;
    for(int i=0; i<topping.size(); i++) {
        m2[topping[i]]--;
        m1[topping[i]]++;
        
        if(m2[topping[i]] == 0)
            m2.erase(topping[i]);
        
        if(m1.size() == m2.size())
            answer++;
    }    
    
    return answer;
}