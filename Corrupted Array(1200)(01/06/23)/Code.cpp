#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int n;
       cin>>n;
       long long int a[n+2];
       long long int sum=0;
       for(long long int i=0;i<n+2;i++)
       {
           cin>>a[i];
           sum+=a[i];
       }
       sort(a,a+n+2);
       sum-=a[n+1];
       long long int f=-1;
       if(sum==2*a[n])
       f=n;
       else
       {
           for(long long int i=0;i<n+1;i++)
           {
               if(sum==a[i]+a[n+1])
               {
                   f=i;
                   break;
               }
           }
       }
       if(f>=0)
       {
           for(long long int i=0;i<n+1;i++)
           {
               if(i!=f)
               cout<<a[i]<<" ";
           }
           cout<<endl;
       }
       else
       cout<<-1<<endl;
   }
    return 0;
}