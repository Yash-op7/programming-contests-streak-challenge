#include<bits/stdc++.h>
using namespace std;
#define vi vector<ll>
#define ll long long
#define pb push_back

int main() {
    ll tt;
    cin >> tt;
    while(tt--) {
        ll n;
        cin >> n;
        ll mx_odd=-1;
        multiset<ll> evens;
        for(ll i=0;i<n;i++) {
            ll x;
            cin >> x;
            if(x %2 == 0) {evens.insert(x);}
            else {mx_odd = max(mx_odd, x);}
        }
        long long ans = 0;
        if(mx_odd == -1) {
            cout << ans << '\n';
            continue;
        }
        ll x = mx_odd;
        while(!evens.empty()) {
            int y = *evens.begin(), max_y = *evens.rbegin();
            if(x > y) {
                x += y;
                evens.erase(evens.begin());
            } else {
                x += max_y;
            }
            ans++;
        }
        cout << ans << '\n';
    }
}

// 0
// 0
// 2
// 4
// 3
// 3
// 3

