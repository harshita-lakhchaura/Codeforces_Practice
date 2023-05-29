#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       long long int x;
       cin >> x;
       int f=0;
       for(long long int i=1;i*i*i<=x;i++)
       {
           long long int y=x-i*i*i;
           long long int z=cbrt(y);
           if(z*z*z==y && y!=0)
           {
               f=1;
               break;
           }
       }
       cout<<(f?"YES\n":"NO\n");
   }
    return 0;
}