#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int answer = 0;
vector<vector<int>> D;
int N;
bool visited[8] = {false};

void dfs(int n, int p) {
    if(answer < n)
        answer = n;
    
    for(int i=0; i<N; i++) {
        if(visited[i] || p < D[i][0])
            continue;
        
        visited[i] = true;
        dfs(n+1, p-D[i][1]);
        visited[i] = false;
    }
}

int solution(int k, vector<vector<int>> dungeons) {
    D = dungeons;
    N = dungeons.size();
    
    dfs(0, k);
    
    return answer;
}