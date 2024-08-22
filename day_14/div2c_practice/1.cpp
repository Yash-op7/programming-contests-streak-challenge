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


ll solve() {
    int n, m;
    cin >> n >> m;
    vi c(n);
    inp(n, c);
    vvi a(n, vi(m));
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> a[i][j];
        }
    }
    vector<vector<ll>>adj[n];
    for(int i=0;i<n;i++) {
        int src = i;
        int cost = INT_MAX;
        for(int j=0;j<m;j++) {
            
        }
    }
    pq<vector<ll>, vector<vector<ll>>, greater<ll>>q;
    q.push({0, 0});
    int dest = n-1;

    while(!q.empty()) {
        ll src = q.top()[1], curr_cost = q.top()[0];
        q.pop();

        if(src == dest) {
            return curr_cost;
        }


    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) cout << solve() << '\n';
}

