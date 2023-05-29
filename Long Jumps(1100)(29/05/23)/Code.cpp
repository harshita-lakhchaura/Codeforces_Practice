#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       long long int a[n];
       for(int i=1;i<=n;i++)
       cin>>a[i];
       long long int mx=0;
       for(int i=n;i>=1;i--)
       {
           if(i+a[i]<=n)
           a[i]=a[i]+a[i+a[i]];
           mx=max(a[i],mx);
       }
       cout<<mx<<endl;
   }
    return 0;
}