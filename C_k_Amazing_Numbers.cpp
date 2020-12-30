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

signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        tc(te)
        {
                int T,n,x,k, y, i,l, j;
                cin>>n;
                vct<int> a(n),ans(n+1,-1);
                vct<int> v[n+1];
                loop(i,0,n){
                        cin>>a[i];
                        v[a[i]].pb(i+1);
                }
                vct<int> maxnum(n+1,INT_MAX);
                loop(i,1,n+1){
                        int maxg=-1;
                        loop(j,0,v[i].size()){
                                if(j==v[i].size()-1){
                                        maxg=max(maxg,n-v[i][j]);
                                }
                                if(j==0){
                                        maxg=max(maxg,v[i][j]-1);
                                }
                                if(j>0){
                                        maxg=max(maxg,v[i][j]-v[i][j-1]-1);
                                }
                        }
                        maxg++;
                        maxnum[maxg]=min(maxnum[maxg],i);
                }
                int mi=INT_MAX;
                loop(i,1,n+1){
                        mi=min(mi,maxnum[i]);
                        if(mi==INT_MAX){
                                cout<<-1<<" ";
                        }
                        else{
                                cout<<mi<<" ";
                        }
                }
                cout<<endl;
        }
        return 0;
}