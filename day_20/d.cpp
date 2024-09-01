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

void dfs(int curr, auto&ans, auto&a, auto&str) {
    int val = 0;
    int next = a[curr-1];
    if(str[curr-1] == '0') val++;
    while(next != curr) {
        if(str[next-1] == '0') val++;
        next = a[next-1];
    }

    next = a[curr-1];
    ans[curr] = val;
    while(next != curr) {
        ans[next] = val;
        next = a[next-1];
    }
}

void solve() {
    int n;
    cin >> n;
    vi a(n, 0);
    inp(n, a);
    string str;
    cin >> str;
    vector<int> ans(n+1, -1);

    for(int i=1;i<=n;i++) {
        if(ans[i] == -1) {
            dfs(i, ans, a, str);
        }
    }
    
    for(int i=1;i<=n;i++) {
        cout << ans[i] << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}
