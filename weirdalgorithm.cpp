/**
 * weirdalgo 
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
 cin >>n;
 cout<<n<<" ";
 while(n!=1)
 {
 	if(n&1)
 		{
 			n *=3;
 			n++;
 		}
 	else
 		n /=2;	
 	cout<<n<<" ";
 }
    return 0;
}