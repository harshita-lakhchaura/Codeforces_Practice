#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       if(a==0 || b==0)
       cout<<0<<endl;
       else
       cout<<min(min(a,b),(a+b)/3)<<endl;
   }
    return 0;
}