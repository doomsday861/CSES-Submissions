/**
 * trailing zeroes

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
ll ans=0;
for(ll i =5; n/i>= 1; i*=5)
{
	ans += (n/i);
}
cout<<ans<<endl;
}