/**
 * palindrome reader
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
int ar[26];
for(int i=0;i<26;i++)
	ar[i]=0;

for(ll i=0;i<s.length();i++)
	ar[int(s[i]-'A')]++;

ll oc =0;

for(int i=0;i<26;i++)
		{
			if(ar[i]&1)
			oc++;
		}

char ans[s.length()+1];
if((s.length()&1 && oc>1) ||(s.length() &1^1 && oc!=0))
	{
		cout<<"NO SOLUTION	"<<oc<<endl;
		return 0;
	}
else
	{
		for(int i=0; i<s.length();i++)
		{
			for(int j=0;j<26;j++)
			{
				if(ar[j]>1)
				{
					ans[i] = char(j+'A');
					ans[s.length()-i - 1] =char(j+'A');
					ar[j]-=2;
					break;
				}
			}
		}
	}
if(s.length()&1)
{
	for(ll i=0; i <26;i++)
	{
		if(ar[i]==1)
		{
			ans[int(ceil(s.length()/2))] = char(i+'A');
		}
	}
}
for(ll i=0;i<s.length();i++)
	cout<<ans[i];
    
    return 0;
}