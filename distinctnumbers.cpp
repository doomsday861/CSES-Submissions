/**
 * distinct numbers
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
set<ll> s;
while(n--)
{
	ll x;
	cin>>x;
	s.insert(x);
}
cout<<s.size()<<endl;
}