/**
 * MISSING NUMBER
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
ll z=0;
ll x = (n*(n+1))/2;
for(ll i=1 ; i <n;i++)
{
	ll r;
	cin>>r;
	z +=r;
}
cout<< x-z<<endl;
}