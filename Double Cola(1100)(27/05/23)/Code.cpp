#include<bits/stdc++.h>
using namespace std;

int main()
{
   char s[][8]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
   int n;
   cin>>n;
   while(n>5)
   {
       n=n/2-2;
   }
   cout<<s[n-1]<<endl;
    return 0;
}