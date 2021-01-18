/**
 * TWO KNIGHTS CSES
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
for(ll i=1;i<=n;i++)
{
	if(i==1)
		cout<<0<<endl;
	// else if(i==2)
	// 	cout<<28<<endl;
	else
	{
		ll sq = i*i;
		ll maxi = (sq * (sq-1))/2;
		maxi -= 4*(i-1) * (i-2);
		cout<<maxi<<endl;
	}

}
    return 0;

}