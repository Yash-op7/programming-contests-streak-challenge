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
    int n, k;
    cin >> n >> k;
    vi a(n), b(n);

    inp(n, a);
    inp(n, b);

    sort(all(a));
    sort(all(b));

    int i = 0, j = 0;
    int cnt1 = 0, cnt2 = 0;
    while(i<n && j<n && k--) {
        if(a[i] == b[j]) {
            i++;
            j++;
            k--;
        } else {
            if(i + 1 < n && a[i+1] == a[i]) {
                cnt1++;
                i+=2;
            }
            if(j+1<n && b[j+1] == b[j]) {
                cnt2++;
                j+=2;
            }
        }
    }
    if(k == 0) {
        
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

