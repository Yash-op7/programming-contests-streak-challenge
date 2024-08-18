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


void solve() {
    int n;
    if(n == 1) {
        cout << 1 << '\n';
        return;
    }
    cin >> n;
    vi a(n);
    inp(n, a);
    reverse(all(a));
    // 1 2 3 4 5 6
    // 1 6 5 4 3 2
    // rev, shift

    // 1 2 3 4 5 6 7
    // 1 7 6 5 4 3 2
    swap(a[n-1], a[n-2]);
    cout << a.back() << ' ';
    for(int i=0;i<n-1;i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}   

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}
