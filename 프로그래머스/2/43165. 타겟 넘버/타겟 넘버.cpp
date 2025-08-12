#include <string>
#include <vector>
#include <iostream>

using namespace std;

int SIZE;
int ANSWER;
int TARGET;
vector<int> NUMBERS;

void dfs(int index, int result) {   
    if(index == SIZE) {
        if(result == TARGET) {
            cout << result << " ";
            ANSWER++;
        }

        return;
    }
    
    dfs(index+1, result + NUMBERS[index]);
    dfs(index+1, result - NUMBERS[index]);
}

int solution(vector<int> numbers, int target) {
    NUMBERS = numbers;
    SIZE = numbers.size();
    TARGET = target;

    dfs(0, 0);
       
    return ANSWER;
}