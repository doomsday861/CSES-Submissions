/**
 * NUMBER SPIRAL
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
ll t;
cin>>t;
while(t--)
{
ll y,x;
cin >>y>>x;
ll ans;
ll z = max(x,y);
ll maxi = (z-1)*(z-1);
if(z&1)
{
	if(y==z)
		ans = maxi + x;
	else
		ans = maxi + 2 *z-y;
}
else
{
	if(x==z)
		ans = maxi + y;
	else
		ans = maxi + 2 *z-x;
}
cout<<ans<<endl;
}
    return 0;
}