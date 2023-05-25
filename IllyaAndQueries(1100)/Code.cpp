#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s;
    cin>>s;
    int n=s.length();
    int m;
    cin>>m;
    int a[n];
    a[0]=0;
    for(int i=1;i<n;i++)
    {
        a[i]=a[i-1]+(s[i-1]==s[i]);
    }
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<a[r-1]-a[l-1]<<endl;
    }
    return 0;
} 