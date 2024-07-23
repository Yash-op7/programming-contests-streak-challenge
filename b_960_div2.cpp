#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, x, y;
    cin >> tt;
    while(tt--) {
        cin >> n;
        vector<int> a(n, 1);
        for(int i=0;i<n;i++) cin >> a[i];
        unordered_map<int, bool> seen;
        long long sum = 0;
        int maxx = 0;
        for(int i=0;i<n;i++) {
            if(seen[a[i]]) {
                
            } else {
                sum += a[i];
                seen[a[i]]=true;
            }
        }
    }
}