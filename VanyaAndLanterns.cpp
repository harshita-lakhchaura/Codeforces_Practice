#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,l,m=0,i;
	cin>>n>>l;
	int a[n];
	for(i=0;i<n;i++) 
	cin>>a[i];
	sort(a,a+n);
	m=max(a[0],l-a[n-1])*2;
	for(i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
	printf("%lf",m/2.0);
}