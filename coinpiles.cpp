/**
 * Coin Piles
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

 testcase
  {
  	ll a,b;
  	cin >>a>>b;
    if((a+b) % 3 !=0)
   	 {
   		cout<<"NO"<<endl;
   		continue;	
   	 }
   	else if(min(a,b)*2 >= max(a,b))
   	{
   		cout<<"YES"<<endl;
   	}
   	else
   		cout<<"NO"<<endl;
}
    return 0;
}