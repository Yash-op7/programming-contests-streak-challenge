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
    int l, r;
    cin >> l >> r;

    ll low = 0, high = 1e9;
    int ans=  0;
    int diff = abs(r-l);
    while(low <= high) {
        int mid = (low+high)/2;

        ll sum = (((ll)mid+1)*mid)/2;

        if(sum > diff) {
            high = mid -1 ;
        } else {
            ans = mid;
            low = mid + 1;
        }
    }
    cout << ans + 1 << '\n';
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 2
// 3
// 1
// 5
// 44721


