#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n,b=0;
       cin>>n;
       int a[5005]={0};
       for(int i=1;i<=n;i++)
       {
           int x;
           cin>>x;
           if(a[x]==0)
           a[x]=i;
           else if(a[x]!=i-1)
           b=1;
       }
       cout<<(b?"YES":"NO")<<endl;
   }
    return 0;
}