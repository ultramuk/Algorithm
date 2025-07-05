#include <string>
#include <vector>

using namespace std;

string solution(string str, int n) {
    for(auto& s : str) {
        if(s == ' ')
            continue;
        
        if(islower(s)) {
            s = (s - 'a' + n) % 26 + 'a';
        } else if(isupper(s)){
            s = (s - 'A' + n) % 26 + 'A';
        }
    }

    return str;
}