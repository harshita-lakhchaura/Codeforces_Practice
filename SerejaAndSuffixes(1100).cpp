#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n>>m;
    int a[n];
    int dis[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    
    dis[n-1]=1;
    set<int>x;
    x.insert(a[n-1]);
    for(int i=n-2;i>=0;i--)
    {
        int t=x.size();
        x.insert(a[i]);
        if(x.size()>t)
        dis[i]=dis[i+1]+1;
        else
        dis[i]=dis[i+1];
    }
    while(m--)
    {
        int l;
        cin>>l;
        cout<<dis[l-1]<<endl;
    }
    return 0;
}