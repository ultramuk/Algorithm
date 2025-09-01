#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    for(auto& skill_tree : skill_trees) {
        bool is_skill_tree = true;
        int i = 0;
        
        for(auto sk : skill_tree) {
            if(skill.find(sk) == string::npos)
                continue;
            
            if(skill.find(sk) == i) {
                i++;
            }
            else {
                is_skill_tree = false;
                break;
            }
        }
        
        if(is_skill_tree) answer++;
    }
    
    return answer;
}