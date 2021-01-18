/**
 * increasing array
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
ll count=0;
ll ar[n];
cin>>ar[0];
for(ll i=1; i < n;i++)
{
	cin>>ar[i];
	if(ar[i-1]>ar[i])
	{
		count += ar[i-1] - ar[i];
		ar[i]  = ar[i-1];
	}
}
cout<<count<<endl;
    return 0;
}