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
       pair<int,int>a[1000];
       for(int i=0;i<n;i++)
       cin>>a[i].first>>a[i].second;
       sort(a,a+n);
       int x=0,y=0,u,v,f=0;
       string ans="";
       for(int i=0;i<n;i++)
       {
           u=a[i].first,v=a[i].second;
           if(v<y)
           {
               f=1;
               cout<<"NO"<<endl;
               break;
           }
           ans+=string(u-x,'R');
           ans+=string(v-y,'U');
           x=u;
           y=v;
       }
       if(f==0)
       cout<<"YES\n"<<ans<<endl;
   }
    return 0;
}