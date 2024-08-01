#include<bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    int n, m;
    cin >> tt;
    while(tt--) {
        cin >> n >> m;
        vector<int> petals(n);
        for(int i=0;i<n;i++) cin >> petals[i];
        sort(petals.begin(), petals.end());
        int ans = 0;
        int j=0;
        while(j < n && petals[j] == petals[0]) j++;
        long long a = 0, b = 0;
        int i = 0;
        while(i < n) {
            
        }
    }   
}