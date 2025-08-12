#include <vector>
#include <queue>
using namespace std;

int solution(vector<vector<int> > maps)
{
    // 초기화
    queue<pair<pair<int, int>, int>> q; // ((y, x), dist)
    vector<vector<bool>> visited(maps.size(), vector<bool>(maps[0].size(), false));
    vector<pair<int, int>> d = {{-1,0}, {1,0}, {0,-1}, {0,1}};
    
    // 시작값
    q.push({{0,0},1});
    visited[0][0] = true;
    
    while(!q.empty()) {
        auto [pos, count] = q.front();
        auto [y, x] = pos;
        q.pop();
        
        // 정답 조건
        if(y == maps.size()-1 && x == maps[0].size()-1)
            return count;
        
        // 범위 연산
        for(const auto [dy, dx] : d) {
            auto ny = y + dy;
            auto nx = x + dx;
            
            if(0 <= ny && ny < maps.size() && 0 <= nx && nx < maps[0].size()
                    && !visited[ny][nx] && maps[ny][nx] == 1) {
                visited[ny][nx] = true;
                q.push({{ny, nx}, count+1});
            }
        }
    }
    
    return -1;
}