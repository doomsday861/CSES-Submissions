/**
 * creating strings
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
char c;
vector<char>s;
while(cin>>c)
{
s.push_back(c);
}
vector<vector<char>> ans;
sort(s.begin(),s.end());
do{
	//sort(s.begin(),s.end());
	ans.push_back(s);
}while(next_permutation(s.begin(),s.end()));

	cout<<ans.size()<<endl;
	for(ll i=0; i < ans.size();i++)
	{
		//sort(ans[i].begin(),ans[i].end());
		for(ll j=0; j <ans[i].size();j++)
		{
			cout<<ans[i][j];
		}
		cout<<endl;
	}
    return 0;

}