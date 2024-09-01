#include<iostream>
using namespace std;




vector<int> f(int cache_size, int cache_time, int server_time, vector<string> &requests) {
    set<pair<int, string>>cache;
    vector<int> ans;
    for(int i=0;i<n;i++) {
        string curr = requests[i];
        int ans = 0;
        if(cache.empty() || cache.find(curr) == cache.end()) {
            ans.push_back(server_time);
            if(cache.size() < cache_size) {
                cache.insert({i, })
            } 
            
            insert_cache()
        }
    }
}

int main() {
    int cache_size;

}