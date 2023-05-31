#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int x;
       cin>>x;
       int a=0;
       while(x>0)
       {
           a++;
           x-=a;
       }
       if(x==-1)
       a++;
       cout<<a<<endl;
   }
    return 0;
}