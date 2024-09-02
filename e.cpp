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
    cin >> n;
    string str;
    cin >> str;
    int ans = INT_MAX;
    if(n %2 == 0) {
        unordered_map<char, int>m1, m2;
        for(int i=0;i<n;i+=2) {
            m1[str[i]]++;
            m2[str[i+1]]++;
        }
        int odd_mx=0, even_mx=0;
        for(const auto x:m1) {
            odd_mx = max(odd_mx, x.second);
        }
        for(const auto x:m2) {
            even_mx = max(even_mx, x.second);
        }
        ans = (n/2) - odd_mx + (n/2) - even_mx;
    } else {
        vector<unordered_map<char, int>>m1(n), m2(n);
        for(int i=0;i<n;i++) {
            if(i>0) {
                if(i%2 == 0) {
                    m1[i] = m1[i-1];
                    m1[i][str[i]]++;
                } else {
                    m2[i] = m2[i-1];
                    m2[i][str[i]]++;
                }
            } else {
                if(i%2 == 0) {
                    m1[i][str[i]]++;
                } else {
                    m2[i][str[i]]++;
                }
            }
        }
        for(int i =0;i<n;i+=2) {
            m1[i+1] = m1[i];
        }
        for(int i=2;i<n;i+=2) {
            m2[i] = m2[i-1];
        }
        for(int i=0;i<n;i++) {
            // left
            int left1=0, left2=0;
            unordered_map<char, int> temp1, temp2;
            if(i>0) {
                if(i %2 == 0) {
                    if(i-2>=0) {
                        temp1 = m1[i-2];
                    }
                    temp2 = m2[i-1];
                } else {
                    if(i-2>=0) {
                        temp2 = m2[i-2];
                    }
                    temp1 = m1[i-1];
                }
            }
            if(i%2 == 0) {

            }
            for(const x:m1[n-1]) {`
                temp1[x.first] += x.second - m1[i][x.first];
            }
            for(const x:m2[n-1]) {
                temp2[x.first] += x.second - m2[i][x.first];
            }

            int odd_mx=0, even_mx=0;
            for(const auto x:temp1) {
                odd_mx = max(odd_mx, x.second);
            }
            for(const auto x:temp2) {
                even_mx = max(even_mx, x.second);
            }
            ans = (n/2) - odd_mx + (n/2) - even_mx + 1;
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

// 1
// 0
// 1
// 1
// 2
// 6
// 2
// 3
// 1
// 1
    
