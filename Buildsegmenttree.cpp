#include <bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define vsort(v) sort(v.begin(),v.end())
#define setpr fixed<<setprecision
#define gl(a) getline(cin,a)
#define ss second
#define ll long long
#define ld long double
#define ins insert
#define cf cout.flush()
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__)
template <typename Arg1> void ZZ(const char* name, Arg1&& arg1){std::cerr << name << " = " << arg1 << endl;}
template <typename Arg1, typename... Args>void ZZ(const char* names, Arg1&& arg1, Args&&... args)
{
	const char* comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#define countd(n) (log10(n)+1)
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
/*-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-==-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=*/
void build(vector < ll >&v , vector < ll >&tree , ll start , ll end, ll trnode)
{
	if(start == end)
	{
		tree[trnode]=v[start];
		return;
	}
	ll mid = (start + end)/2;
	build(v,tree,start,mid,2*trnode);
	build(v,tree,mid+1,end,2*trnode+1);
	
	tree[trnode]=tree[2*trnode]+tree[2*trnode+1];
}
int main() {
	
	vector < ll > v;
	ll b,n;
	cin>>n;
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>b;
		v.pb(b);
	}
	vector < ll > tree(2*n+2,0);
	build(v,tree,0,n-1,1);
	for(ll i = 1 ; i  < 2*n ;  i++)
		cout<<tree[i]<<" ";

    return 0;
}
