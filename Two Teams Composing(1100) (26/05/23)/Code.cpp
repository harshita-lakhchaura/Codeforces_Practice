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
        int a[n];
        map<int,int>cnt;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            cnt[a[i]]++;
            x=max(x,cnt[a[i]]);
        }
        y=cnt.size();
        int res=max(min(y,x-1),min(y-1,x));
        cout<<res<<endl;
    }
    return 0;
}