#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    int i=0, j=0;
    
    for(auto g : goal) {
        bool is_continue = false;
        if(cards1[i] == g) {
            i++;
            is_continue = true;
        }
        if(cards2[j] == g) {
            j++;
            is_continue = true;
        }
        
        if(is_continue == false) {
            return "No";
        }
    }    
    
    return "Yes";
}