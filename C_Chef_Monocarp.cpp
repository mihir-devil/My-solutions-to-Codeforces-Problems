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
int countIncreasing(vector<int> arr, int n) 
{ 
    int cnt = 0;  // Initialize result 
  
    int len = 1; 
  
    for (int i=0; i < n-1; ++i) 
    { 
        // If arr[i+1] is greater than arr[i], 
        // then increment length 
        if (arr[i + 1] > arr[i]) 
            len++; 
              
        // Else Update count and reset length 
        else
        { 
            cnt += (((len - 1) * len) / 2); 
            len = 1; 
        } 
    } 
      
    // If last length is more than 1 
    if (len > 1) 
        cnt += (((len - 1) * len) / 2); 
  
    return cnt; 
}
signed main()
{
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
        tc(te)
        {
                int q,n,x=0,k, y, i,l, j,sum=0,r,c;
                cin>>n;
                vct<int> a(n);
                take(a);
                int count=0;
                if(n==1){
                        cout<<0<<'\n';
                        con;
                }
                int flag=1;
                count=countIncreasing(a,n);
                loop(i,1,n-1){
                        if(a[i]<a[i+1]&&a[i]<a[i-1]){
                                count++;
                        }
                }
                cout<<count<<'\n';
        }
        return 0;
}