#include <string>
#include <vector>
#include <regex>

using namespace std;

int solution(string str) {
    vector<string> vec = { "zero", "one","two","three","four","five","six","seven","eight","nine" };
    
    for (int i = 0; i < vec.size(); i++)
        str = regex_replace(str, regex(vec[i]), std::to_string(i));
    
    return stoi(str);
}