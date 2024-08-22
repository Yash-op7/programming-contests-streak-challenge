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

bool solve() {
    int n;
    cin >> n;
    vector<string>words(n);
    for(int i=0;i<n;i++) cin >> words[i];
    string a;
    cin >> a;

    vector<int> rank(26, 0);
    for(int i=0;i<26;i++) rank[a[i]-'a'] = i;

    for(int i=0;i<words.size()-1;i++) {
        string x = words[i], y = words[i+1];
        for(int j=0;j<min(x.length(), y.length());j++) {
            if(x[j] != y[j]) {
                if(rank[x[j] - 'a'] > rank[y[j]-'a']) {
                    return false;
                } else {
                    return true;
                }
            }
        }
    }
    return true;
}

int main() {
    if(solve()) {
        cout << "True";
    } else {
        cout << "False";
    }
}