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
       int e=0;
       int a[n];
       for(int i=0;i<n;i++)
       {
           cin>>a[i];
           if(a[i]%2==0)
           e++;
       }
           sort(a,a+n);
           int f=0;
           for(int i=0;i<n;i++)
           {
               if(abs(a[i]-a[i+1])==1)
               f=1;
           }
           if(e%2==0 || f==1)
           cout<<"YES"<<endl;
           else
           cout<<"NO"<<endl;
   }
    return 0;
}