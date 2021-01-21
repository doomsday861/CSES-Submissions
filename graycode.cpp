/**
 * GRAY CODE
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
std::vector<string> v;
v.push_back("0");
v.push_back("1");

for(ll i=2;i<(1<<n);i = i<<1)
{
	for(ll j= i-1; j>=0; j--)
		v.push_back(v[j]);
	for(ll j=0;j<i;j++)
		v[j] = "0" + v[j];
	for(ll j=i;j<2*i;j++)
		v[j] = "1" + v[j];
}
	for(ll i=0;i<v.size();i++)
		cout<<v[i]<<endl;
}
