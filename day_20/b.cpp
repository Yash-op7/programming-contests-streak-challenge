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

bool f(int a, int b) {
    if(a==0) {
        if(b%2 == 1) return false;
        return true;
    } 
    if(b == 0) {
        if(a%2 ==0 ) return true;
        return false;
    }
    if(a % 2 == 1) return false;
    return true;
}

bool g(int n) {
    int x = sqrt(n);
    return (x*x==n);
}

ll g2(int n) {
    n = sqrt(n);
    return ((ll)(n-2) * (n-2));
}

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    ll z = g2(n);
    int cnt =0;
    for(char x:str) {
        if(x=='0') cnt++;
    }
    if(g(n)) {
        if(cnt != z) {cout << "No\n";return;}
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    int tt;
    cin >> tt;
    while(tt--) solve();
}

