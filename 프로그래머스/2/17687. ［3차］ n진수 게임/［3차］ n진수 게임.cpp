#include <string>
#include <vector>

using namespace std;

string STR = "0123456789ABCDEF";
string func(const int n, int num) {
    string s = "";
    
    if(num == 0)
        return "0";
    while(num != 0) {
        s = STR[num % n] + s;
        num /= n;
    }
    
    return s;
}

string solution(int n, int t, int m, int p) {
    string answer = "";
    string str = "";
    
    for(int i=0; str.size() < t*m; i++) {
        str += func(n, i);
    }
    
    for(int i=0; i<t; i++) {
        answer += str[i*m+p-1];
    }
    
    
    return answer;
}