#include<bits/stdc++.h>
using namespace std;
long long int gcd(long long int a,long long int b) { 
   if (b == 0) 
      return a; 
   return gcd(b, a % b);  
} 
int main() {
       long long int x,i;
       vector<long long int> v;
       cin>>x;
       v.push_back(x);
       for(i=1;i<=(long long int)sqrt(x);i++)
       {
           if(x%i==0)
           {
               if(gcd(i,x/i)==1)
               {v.push_back(max(i,x/i));}
           }
       }
       long long int m=*min_element(v.begin(),v.end());
       cout<<m<<" "<<x/m;
    
    return 0;
}