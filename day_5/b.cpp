#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        int n;
        cin >> n;
        string r1, r2;
        cin >> r1 >> r2;
        int ans = 0;
        for(int i=1;i < n-1;i++) {
            if(r1[i] == '.') {
                if(r1[i-1] == 'x' && r1[i+1] == 'x') {
                    if(r2[i] == '.' && r2[i+1] == '.' && r2[i-1] == '.') ans++;
                }
            }
            if(r2[i] == '.') {
                if(r2[i-1] == 'x' && r2[i+1] == 'x') {
                    if(r1[i] == '.' && r1[i+1] == '.' && r1[i-1] == '.') ans++;
                }
            }
        }
        cout << ans << '\n';
    }
}