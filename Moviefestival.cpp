/**
 * Movie Festival
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
array<ll,2>s[n];
for(ll i=0; i < n;i++)
{
	cin >>s[i][1]>>s[i][0];
}
 sort(s,s+n);
ll f= 0;
ll ans=0;
for(ll i=0; i < n; i++)
{
 if(s[i][1]>=f)
 {
 	ans++;
 	f = s[i][0];
 }
}
 cout<<ans;
 
}