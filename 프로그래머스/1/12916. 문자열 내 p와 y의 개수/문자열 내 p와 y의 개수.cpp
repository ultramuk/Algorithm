#include <string>
#include <iostream>
#include <cctype>
#include <algorithm>

using namespace std;

bool solution(string s)
{
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    if(count(s.begin(), s.end(), 'p') == count(s.begin(), s.end(), 'y'))
        return true;
    return false;
}