#include <vector>
#include <iostream>
#include <set>
using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> vec = {arr[0]};
    for(int i=1; i<arr.size(); i++) {
        if(arr[i-1] != arr[i])
            vec.push_back(arr[i]);
    }
    return vec;
}