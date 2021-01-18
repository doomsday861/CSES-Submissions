/**
 * BIT STRINGS
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll pow(ll n)
{
	ll div = 1000000007;
	ll ans = 2;
	for(ll i=2; i <=n;i++)
	{
		ans = ((ans%div) * 2)%div;
	}
	return ans;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
ll x = pow(n);
cout<<x<<endl;
    return 0;
}