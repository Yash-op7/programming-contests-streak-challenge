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


int get(int l, int r) {
    cout << '?' << ' ' << l << ' ' << r << '\n';
    cout.flush();
    int x;
    cin >> x;
    return x; 
}

void f(int l, int r, auto &adj, auto &t, int &cnt, int &rem, auto&t2) {
    if(rem == 0 || t2[l-1][r-1]) {
        return;
    }
    int x;
    if(t[l-1][r-1] != -1) {
        x = t[l-1][r-1];
    } else {
        if(cnt < 0) return;
        cnt--;
        x = get(l, r);
        t[l-1][r-1] = x;
    }
    if(x == l) {
        adj[l-1].pb(r-1);
        adj[r-1].pb(l-1);
        t2[l-1][r-1] = true;
        cout << "Edge betweem " << x << " & " << r << '\n';
        rem--;
        return;
    } else {
        f(l, x, adj, t, cnt, rem, t2);
        f(x, r, adj, t, cnt, rem, t2);
    }
}

void solve() {
    int n;
    cin >> n;
    vvi adj(n);
    vector<vector<bool>>t2(n, vector<bool>(n, false));
    vector<vector<int>>t(n, vector<int>(n, -1));
    int count = 15*n;
    int rem = n-1;
    for(int i=2;i<=n;i++) {
        f(1, i, adj, t, count, rem, t2);
    }
    set<pair<int,int>>edges;
    for(int i=0;i<n;i++) {
        for(const auto x:adj[i]) {
            edges.insert({
                min(i, x) + 1,
                max(i, x) + 1
            });
        }
    }
    cout << '!' << ' ';
    for(const auto edge:edges) {
        cout << edge.first << ' ' << edge.second << ' ';
    }
    cout << '\n';
    cout.flush();
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}
