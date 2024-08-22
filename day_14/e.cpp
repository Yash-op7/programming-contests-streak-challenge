#include <bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define vvvi vector<vvi>
#define vb vector<bool>
#define vvb vector<vb>
#define vvvb vector<vvb>
#define pq priority_queue
#define ll long long
#define all(x) (x).begin(), (x).end()
#define vl vector<ll>
#define vvl vector<vl>
#define rep(i, a, b) for (int i = a; i < b; i++)
#define inp(n, a) for(int i=0;i<n;i++) cin >> a[i];
#define pb push_back
const ll INF = 1e12;
const int MOD = 1e9 + 7;

void print(auto &pref) {
    int n = pref.size();
    for(int i=0;i<n;i++) {
        cout << pref[i] << ' ';
    }
    cout << '\n';
}

void solve() {
    string str;
    cin >> str;
    int n = str.length();
    vi a(n, 0);
    for(int i=0;i<n;i++) {
        // cin >> a[i];
        a[i] = str[i] - '0';
        if(a[i] == 0) a[i] = -1;
    }
    vi pref(n, 0);
    pref[0] = a[0];

    for(int i=1;i<n;i++) 
    {
        pref[i] = pref[i-1] + a[i];
    }

    ll ans = 0;

    unordered_map<int, vi>m;  // prefix_sum -> indices
    

    for(int i=0;i<n;i++) {
        m[pref[i]].pb(i);
    }

    for(auto &x:m) {
        vi &locs = x.second;
        int sz = locs.size();
        vi suff(sz,0);
        
        for(int i=sz-1;i>=0;i--) {
            suff[i] = (i+1 < sz ? suff[i+1]:0) + n - locs[i];
        }

        for(int i=0;i<sz-1;i++) {
            ans += (locs[i]+2) * suff[i+1];
            ans %= MOD;
        }
        if(x.first == 0) {
            ans += suff[0];
            ans %= MOD;
        }
    }

    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 0
// 130
// 147
// 70
