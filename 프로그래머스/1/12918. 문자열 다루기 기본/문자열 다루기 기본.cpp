#include <string>
#include <vector>

using namespace std;

bool solution(string str) {
    if(str.length() != 4 && str.length() != 6)
        return false;
       
    for(auto s : str) {
        if(!isdigit(s))
            return false;
    }
    
    return true;
}