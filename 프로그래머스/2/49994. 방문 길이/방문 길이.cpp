#include <string>
#include <map>
#include <set>
using namespace std;

bool in_range(int x, int y) {
    return -5 <= x && x <= 5 && -5 <= y && y <= 5;
}

int solution(string dirs) {
    map<char, pair<int, int>> dir_map {{'U', {0, 1}}, {'D', {0, -1}},
                                       {'R', {1, 0}}, {'L', {-1, 0}}};
    
    int x = 0, y = 0;
    set<pair<pair<int, int>, pair<int, int>>> edges;
    
    for(auto dir : dirs) {
        auto [dx, dy] = dir_map[dir];
        int nx = x + dx;
        int ny = y + dy;
        
        if(!in_range(nx, ny))
            continue;
            
        pair<int, int> edge1 = {x, y};
        pair<int, int> edge2 = {nx, ny};
        
        if(edge1 > edge2)
            edges.insert({edge1, edge2});
        else
            edges.insert({edge2, edge1});
        
        x = nx;
        y = ny;
    }
    
    return edges.size();
}