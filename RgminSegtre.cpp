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
vector < ll > v,tree;

void build(ll start , ll end, ll trnode)
{
	if(start == end)
	{
		tree[trnode]=v[start];
		return;
	}
	ll mid = (start + end)/2;
	build(start,mid,2*trnode);
	build(mid+1,end,2*trnode+1);
	
	tree[trnode]=min(tree[2*trnode],tree[2*trnode+1]);
}
void update(ll node, ll start, ll end, ll idx, ll val)
{
    if(start == end)
    {
        v[idx] = val;
        tree[node] = val;
    }
    else
    {
        ll mid = (start + end) / 2;
        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);
            
        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}
ll query(ll node, ll start, ll end, ll l, ll r)
{
    if(r < start or end < l)
        return LLONG_MAX;
    if(l <= start and end <= r)
        return tree[node];
    ll mid = (start + end) / 2;
    ll p1 = query(2*node, start, mid, l, r);
    ll p2 = query(2*node+1, mid+1, end, l, r);
    return min(p1,p2);
}
int main()
{
	char f;
	ll b,n,q,a,c;
	cin>>n>>q;
	
	//~ ll p=ceil(log2(n));
	
	//~ p=(2*pow(2,p));
	//~ cout<<p;
	tree.resize(4*n);
	for(ll i = 0 ; i < n ; i++)
	{
		cin>>b;
		v.pb(b);
	}
	build(0,n-1,1);

	while(q--)
	{
		cin>>f>>a>>b;
		if(f=='q')
		{
			a--;
			b--;
			c=query(1,0,n-1,a,b);
			cout<<c<<endl;
		}
		else
		{
			a--;
			update(1,0,n-1,a,b);
		}
	}
    return 0;
}
