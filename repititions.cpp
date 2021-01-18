/**
 * repititions
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

 string s;
 cin>>s;
 char c=s[0];
 ll m =1;
 ll ans=1;
 for(ll i=1; i <s.length();i++)
 {
 	if(s[i]==c)
 		m++;
 	else
 	{
 		ans = max(m,ans);
 		c = s[i];
 		m=1;
 	}
 	ans = max(m,ans);
 }
 cout<<ans<<endl;
    return 0;
}