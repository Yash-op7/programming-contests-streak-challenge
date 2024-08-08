#include<bits/stdc++.h>
using namespace std;

int ncr(int n, int r) {
    long long p = 1, k = 1;
 
    // C(n, r) == C(n, n-r),
    // choosing the smaller value
    if (n - r < r)
        r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
 
            // gcd of p, k
            long long m = __gcd(p, k);
 
            // dividing by gcd, to simplify
            // product division by their gcd 
            // saves from the overflow
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
 
        // k should be simplified to 1
        // as C(n, r) is a natural number
        // (denominator should be 1 ) .
    }
 
    else
        p = 1;
 
    // if our approach is correct p = ans and k =1
    // cout << p << endl;
    return p;
}

int main() {
    int tt;
    cin >> tt;
    while(tt--) {
        string s;
        cin >> s;
        bool flag = true;
        string ans="";
        for(int i=1;i<s.length();i++) {
            if(s[i] == s[i-1]) {
                flag = false;
                ans += s.substr(0, i);
                if(s[i] > 'a') {
                    ans += 'a';
                } else {
                    ans += 'b';
                }
                ans += s.substr(i);
                break;
            }
        }
        if(flag) {
            ans = s;
            if(s[s.length() - 1] == 'a') {
                ans += 'b';
            } else {
                ans += 'a';
            }
        }
        cout << ans << '\n';

    }
}