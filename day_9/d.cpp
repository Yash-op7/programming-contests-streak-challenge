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

int intersection(string &a, string &b, auto &t) {
    if(t.find(a+b) != t.end()) return t[a+b];
    set<char> x;
    x.insert(a[0]);
    x.insert(b[0]);
    x.insert(a[1]);
    x.insert(b[1]);
    t[a+b] = 4 - x.size();
    return t[b+a] = 4 - x.size();
}

void solve() {
    int n, q;
    cin >> n >> q;
    // BG, BR, BY, GR, GY, or RY
    unordered_map<string, set<int>>mapper;
    string x;
    vector<string>input(n);
    for(int i=1;i<=n;i++) {
        cin >> x;
        input[i-1] = x;
        mapper[x].insert(i);
    }
    unordered_map<string, vector<string>adj;
    adj["BG"] = {"BR", "BY", "GR", "GY", "BG"};
    adj["BR"] = {"BG", "BY", "GR", "RY", "BR"};
    adj["BY"] = {"BG", "BR", "GY", "RY", "BY"};
    adj["GR"] = {"BG", "BR", "GY", "RY", "GR"};
    adj["GY"] = {"BG", "BY", "GR", "RY", "GY"};
    adj["RY"] = {"BR", "BY", "GR", "GY", "RY"};
    unordered_map<char, vector<string>>adj2;
    adj2['R'] = {"BR", "GR", "RY"};
    adj2['B'] = {"BR", "BY", "BG"};
    adj2['G'] = {"BG", "GY", "GR"};
    adj2['Y'] = {"BY", "GY", "RY"};

    for(int i=0;i<q;i++) {
        int src, dest;
        cin >> src >> dest;
        string from = input[src-1], to = input[dest-1];
        unordered_map<string, int>t;
        int common_cnt = intersection(from, to, t);
        if(common_cnt == 2) {
            cout << abs(src - dest) << '\n';
        } else if (common_cnt == 1) {
            char c = 'a';
            for(int j=0;j<2;j++) {
                if(from[j] == to[0]) {
                    c = from[j];;
                    break;
                } else if (from[j] == to[1]) {
                    c = to[1];
                    break;
                }
            }
            for(string jump:adj2[c]) {
                
            }
        } else {

        }
    }

    return;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) solve();
}
