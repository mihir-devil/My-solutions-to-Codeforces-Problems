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
const int mod2=998244353;
signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        tc(te)
        {
                int q,n,x=0,k, y, i,l, j,sum=0,r,c;
                cin>>n;
                vct<int> a(n+1);
                take1(a);
                sort(all(a));
                int dp[n+1][1002];
                memset(dp,0,sizeof(dp));
                loop(j,0,1000)
                dp[0][j]=0,dp[1][j]=abs(j-a[1]);
                dp[1][0]=0;
                loop(i,2,n+1){
                        int k=pinf;
                        dp[i][0]=pinf;
                        loop(j,1,500){
                                loop(p,1,j){
                                        k=min(dp[i-1][p]+abs(j-a[i]),k);
                                }
                                dp[i][j]=k;
                        }
                        loop(j,1,500){
                                dp[i][0]=min(dp[i][0],dp[i][j]);
                        }
                }
                cout<<dp[n][0]<<'\n';
        }
        return 0;
}