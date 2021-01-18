/**
 * TWO SETS
**/
#include<bits/stdc++.h>
#define ll long long
#define testcase ll t;cin>>t;while(t--)
using namespace std;
ll n;
ll ar[1000009];
vector<ll> v1;
vector<ll> v2;
void good()
{
	cout<<v1.size()<<endl;
for(ll i=0; i < v1.size();i++)
	cout<<v1[i]<<" ";
cout<<endl;
cout<<n-v1.size()<<endl;
for(ll i=1;i<=n;i++)
	if(ar[i]!=-1)
		cout<<ar[i]<<" ";
cout<<endl;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
cout.tie(NULL);
cin >>n;
ar[0] =0;
for(ll i=1;i<=n;i++)
	ar[i] = i;

ll f = (n*(n+1))/4;
ll fs =0;
ll id = n;

bool flag =0;
ll sb1= n-1;
ll sb2 =0;
while(fs<=f)
{	
//	cout<<ar[id]<<endl;
//	cout<<fs<<" ";
	v1.push_back(ar[id]);
	fs +=ar[id];
	ar[id] = -1;
	if(fs>=f)
		break;
	ar[id] = -1;
	if(!flag)
	{
		id -= sb1;
		flag=1;
		continue;
	}
	if(flag)
	{
		sb1--;
		id +=sb1;
		flag=0;
		sb1--;
	}
}
ll vfs =0;
ll vf2=0;
for(ll i=0; i < v1.size();i++)
	vfs +=v1[i];
for(ll i=1;i<=n;i++)
	if(ar[i]!=-1)
		vf2 +=ar[i];

if(vfs == vf2)
	{
		cout<<"YES"<<endl;
		good();
	}

else
cout<<"NO"<<endl;

    return 0;
}