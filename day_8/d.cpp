#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n, 0);
    for(int i =0;i<n;i++) cin >> a[i];
    string str;
    cin >> str;
    long long ans = 0;
    int l =  0;
    int r = n-1;
    while (l < n && str[l] == 'R') {
        l++;
    }
    while(r > l && str[r] == 'L') {
        r--;
    }
    if(l == r) {
        cout << 0 << '\n';
        return;
    }
    vector<long long> pref(n, 0);
    pref[0] = a[0];
    for(int i=1;i<n;i++) pref[i] = pref[i-1] + a[i];
    int factor = 1;
    while(l < r) {
        ans += factor*(pref[r] - (l == 0) ? 0: pref[l-1] );
        l++; r--;
        while(l<r && str[l] == 'R') l++;
        while(r > l && str[r] == 'L') r--;
        factor++;
        if(l == r) break;
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
