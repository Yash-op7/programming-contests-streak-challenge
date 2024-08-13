#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k, w;
    cin >> n >> m >> k >> w;
    vector<int> a(w);
    for(int i=0;i<w;i++) cin >> a[i];
    sort(a.begin(),a.end());
    vector<vector<int>>grid(n, vector<int>(m, 1));
    vector<int> values;
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            int cnt = 1;
            int up = min({k, i+1, n-i});
            int left = min({k, j+1, m-1});
            grid[i][j] = up*left;
            values.push_back(cnt);
        }
    }
    sort(values.begin(), values.end());
    long long ans = 0;
    int j = values.length()-1;
    for(int i=w.length()-1;i>=0;i--) {
        ans += a[i] * values[j];
        j--;
    }
    cout << ans << '\n';
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 18
// 10
// 0
// 22
