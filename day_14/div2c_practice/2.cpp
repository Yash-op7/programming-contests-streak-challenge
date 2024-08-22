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

ll sum(int n) {
    return ((ll)n*(n+1))/2;
}

void solve() {
    int n, k, q;
    cin >> n >> k >> q;
    vi a(n);
    inp(n, a);

    ll ans = 0;
    for(int i=0;i<n;i++) {
        if(a[i] <= q) {
            int curr = 1, start = i;
            while(i<n && a[i] <=q) i++;

            i--;
            curr = i - start + 1;
            if(curr >= k) {
                ans += (ll)sum(curr - k + 1);
            }
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

