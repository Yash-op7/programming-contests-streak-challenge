#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string str; int n;
        cin >> n;
        getline(cin, str);
        getline(cin, str);
        int a = 0, b=0,c=0,d=0;
        for(char x:str) {
            a += (x=='A') ? 1:0;
            b += (x=='B') ? 1:0;
            c += (x=='C') ? 1:0;
            d += (x=='D') ? 1:0;
        }
        int k = n;
        int ans = min(a, k) + min(b, k) + min(c, k) + min(d, k);
        cout << ans << '\n';
    }
}

// 4
// 2
// 4
// 0
// 9
// 13
