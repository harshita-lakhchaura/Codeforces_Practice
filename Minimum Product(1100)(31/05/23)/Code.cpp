#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int a,b,x,y,n,g,h;
       cin>>a>>b>>x>>y>>n;
       g=max(x,a-n)*max(y,b-n+min(n,a-x));
       h=max(y,b-n)*max(x,a-n+min(n,b-y));
       cout<<min(g,h)<<endl;
   }
    return 0;
}