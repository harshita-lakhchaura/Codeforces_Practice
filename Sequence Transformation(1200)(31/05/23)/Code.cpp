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
       int a[n];
       map<int,vector<int>>mp;
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           mp[a[i]].push_back(i);
       }
       int sum,ans=INT_MAX;
       for(auto i:mp)
       {
           if(i.second[0]-0!=0)
           sum=1;
           else
           sum=0;
           for(int x=1;x<i.second.size();x++)
           {
               if(i.second[x]-i.second[x-1]>1)
               sum++;
           }
           if(n-1-i.second[i.second.size()-1]!=0)
           sum++;
           ans=min(sum,ans);
       }
       cout<<ans<<endl;
   }
    return 0;
}