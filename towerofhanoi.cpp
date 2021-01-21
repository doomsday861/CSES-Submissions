/**
 * tower of hanoi recursion
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
vector<pair<ll,ll>> bruh;
void hanoi(ll n, ll d1=1, ll d2=3, ll d3=2)
{
	if(n==1)
	{
		bruh.push_back(make_pair(d1,d2));
		return;
	}
hanoi(n-1,d1,d3,d2);
bruh.push_back(make_pair(d1,d2));
hanoi(n-1,d3,d2,d1);
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
ll n;
cin>>n;
hanoi(n);
cout<<bruh.size()<<endl;
for(ll i=0; i<bruh.size();i++)
	cout<<bruh[i].first<<" "<<bruh[i].second<<endl;
    return 0;
}