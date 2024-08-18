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
    int x, y, k;
    cin >> x >> y >> k;
    if(k%2 == 1) {
        cout << x << ' ' << y << '\n';
        k--; 
    }
    int cnt = 1;
    for(int i=0;i<k;i+=2) {
        cout << x - cnt << ' ' << y << '\n';
        cout << x + cnt << ' ' << y << '\n';
        cnt++;
    }
}   

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}
