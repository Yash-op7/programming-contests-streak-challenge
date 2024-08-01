#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt, n, x, y;
    cin >> tt;
    while(tt--) {
        cin >> n >> x >> y;
        vector<int> a(n+1, 1);
    }
    for(int i=x;i<=y;i++) {
        a[i] = 1;
    }
    a[0] = -1;
    for(int i=x-1;i>=1;i--) {
        a[i] = a[0];
        a[0]*=-1;  
    }
    a[0] = -1;
    for(int i=y+1;i<=n;i++) 
    {
        a[i] = a[0];
        a[0]*=-1;
    }
    for(int i=1;i<=n;i++) {
        cout << a[i] << ' ';
    }
    cout << '\n';
}