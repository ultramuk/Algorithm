#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {   
    vector<int> vec;
    stringstream ss(s);
    string str;
    
    while(getline(ss, str, ' '))
        vec.push_back(stoi(str));
    
    auto max = *max_element(vec.begin(), vec.end());
    auto min = *min_element(vec.begin(), vec.end());
    
    return to_string(min) + " " + to_string(max);
}