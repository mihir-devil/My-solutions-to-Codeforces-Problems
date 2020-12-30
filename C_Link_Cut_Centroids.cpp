#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
using namespace std;
#define int long long int
#define loop(i, a, b) for (int i = a; i < b; i++)
#define all(x) x.begin(), x.end()
#define vct vector
#define stk stack
#define qu queue
#define us unordered_set
#define um unordered_map
#define ms multiset
#define mm multimap
#define pb push_back
#define pf push_front
#define pii pair<int, int>
#define se second
#define _max max_element
#define _min min_element
#define YES cout << "YES" << '\n'
#define NO cout << "NO" << '\n'
#define br break
#define con continue
#define take(a) \
        loop(i, 0, n) { cin >> a[i]; }
#define take1(a) \
        loop(i, 1, n + 1) { cin >> a[i]; }
#define re return
#define tc(t)     \
        int t;    \
        cin >> t; \
        while (t--)
#define q(q)      \
        int q;    \
        cin >> q; \
        while (q--)
#define subs substr
#define er erase
const int mod = 1e9 + 7;
const int pinf = ((int)2e18);
const int ninf = ((int)-2e18);

vct<int> adj[100005];
int vis[100005];
vct<int> conn(100005,0);
int n,leaf;
int dfs(int node, int par){
        int maxc=0,subt=1;
        int sum=0;
        for(auto child:adj[node]){
                if(child!=par){
                        int temp=dfs(child,node);
                        subt+=temp;
                        maxc=max(maxc,temp);
                }
        }
        maxc=max(n-subt,maxc);
        conn[node]=maxc;
        return subt;
}
signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        int temp=0;
        tc(te)
        {
                int x,k, y, i, j;
                cin>>x>>y>>k;
        }
        return 0;
}