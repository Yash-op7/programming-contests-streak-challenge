#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pb push_back
#define inp(n, a) for(int i=0;i<n;i++) cin >> a[i];
#define all(x) x.begin(), x.end()

void solve() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    inp(n, a);
    sort(all(a));
    reverse(all(a));
    // for(int i=0;i<n;i++) cout << a[i];
    long long ans = 0;
    int curr = k;
    for(int i=1;i<n;i+=2) {
        if(a[i-1] - a[i] > curr) {
            a[i] += curr;
            break;
        } else {
            curr -= abs(a[i] - a[i-1]);
            a[i] = a[i-1] ;
        }
    }
    for(int i=1;i<n;i+=2) {
        ans += a[i-1] - a[i];
    }

    if(n%2 != 0) {
        ans += a.back();
    }
    cout << ans << '\n';
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}

// 4
// 13
// 0
// 0

