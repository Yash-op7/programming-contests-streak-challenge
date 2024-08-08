#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ans = 0;
        bool flag = true;
        for(int i=1;i<n;i+=2) {
            if(s[i] == '(') {
                ans+=1;
                ans += 2;
            } else {
                ans += 1;
            }
        }
        cout << ans << '\n';
    }
}