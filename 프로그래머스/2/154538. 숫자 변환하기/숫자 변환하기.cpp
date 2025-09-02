#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int x, int y, int n) {
    int answer = 0;

    queue<pair<int, int>> q; // [cur, step]
    q.push({x, 0});
    
    vector<bool> visited(y+1, false);
    visited[x] = true;
    
    while(!q.empty()) {
        auto [cur, step] = q.front();
        q.pop();
        
        if(cur == y)
            return step;
        
        for(int next : {cur+n, cur*2, cur*3}) {
            if(next <= y && !visited[next]) {
                q.push({next, step+1});
                visited[next] = true;
            }
        }
    }
    
    return -1;
}