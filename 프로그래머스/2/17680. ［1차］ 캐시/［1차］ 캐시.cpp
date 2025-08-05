#include <string>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    for(auto& city : cities)
        transform(city.begin(), city.end(), city.begin(), ::toupper);
    
    list<string> cache;
    int answer = 0;
    
    for(const auto& city : cities) {
        auto it = find(cache.begin(), cache.end(), city);
        
        if (it == cache.end()) {
            // cache miss
            if (cacheSize > 0 && cache.size() >= cacheSize)
                cache.pop_back();
            if (cacheSize > 0)
                cache.push_front(city);
            answer += 5;
        } else {
            // cache hit
            cache.erase(it);
            cache.push_front(city);
            answer += 1;
        }
    }
    
    return answer;
}
