/**
 * Apple divisions
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
ll ar[n];
ll ts=0;
ll m=INT_MAX;
for(ll i=0; i < n;i++)
{
	cin>>ar[i];
	ts+=ar[i];
}
ll c=0;
for(ll i=0; i < (1<<n); i++)
{
	c++;
	ll ss =0;
	for(ll j=0; j <n; j++)
	{
		if(i & (1<<j))
			ss +=ar[j];
	}
//	cout<<ss<<endl;
ll t = abs((ts-ss) - ss);
m = min(t,m);
}
cout<<m<<endl;
}
