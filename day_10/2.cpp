#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

class Solution {
public:
    int f(int src, int par, auto&adj, int &sz) {
        int subtree_sz = 0;
        int ans = 0;
        bool flag = false;
        set<int>curr;
        for(const  auto next:adj[src]) {
            if(next != par) {
                flag = true;
                int curr_size = 0;
                ans += f(next, src, adj, curr_size);
                curr.insert(curr_size);
                subtree_sz+=curr_size;
            }
        }
        if(!flag) {
            sz = 1;
            return 1;
        } else {
            sz = subtree_sz+1;
            if(curr.size() == 1) {
                return ans + 1;
            } else {
                return ans;
            }
        }
    }
    int countGoodNodes(vector<vector<int>>& edges) {
        int n = edges.size();
        n++;
        vvi adj(n);
        for(const auto x:edges) {
            adj[x[0]].pb(x[1]);
            adj[x[1]].pb(x[0]);
        }
        int sz=0;
        return f(0, -1, adj, sz);
    }
};