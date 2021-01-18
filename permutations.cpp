/**
 * permutations
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
vector<ll> v;
vector<ll> v2;

for(ll i=1;i<=n;i++)
	{
		if(i&1)
		v.push_back(i);
	else
		v2.push_back(i);
}

for(ll i=1;i<=n;i++)
	{
		if(i&1^1)
		v.push_back(i);
	else
		v2.push_back(i);
}

bool f=0;
bool f2=0;

for(ll i=1;i<n;i++)
{
	if(abs(v[i] - v[i-1])==1)
		{
			f=1;
		}
	if(abs(v2[i]- v2[i-1])==1)
	{
		f2=1;
	}
}
if(f && f2)
{
	cout<<"NO SOLUTION";
	return 0;
}

if(f && !f2)
{
	for(ll i=0;i<n;i++)
	{
		cout<<v2[i]<<" ";
	}
}
else
{
	for(ll i=0;i<n;i++)
	{
		cout<<v[i]<<" ";
	}
}
    return 0;
}