#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

vector < bool > v;
vector < vector < ll > > g;

void edge ( ll a , ll b )
{
    g[a].pb(b);
}

void bfs (ll u)
{
    queue < ll > q;
    q.push(u);
    v[u]=true;

    while(!q.empty())
    {
        ll f=q.front();
        q.pop();
        cout<<f<<" ";

        for (auto i = g[f].begin(); i!=g[f].end(); i++) // g[f].begin() is address , i holds address and *i holds value
        {
            if(!v[*i])
            {
                q.push(*i);
                v[*i]=true;
            }
        }

    }

}
int main()
{
    ll a,b,n,e;// n is number of vertex, e is no. of edges
    cin>>n>>e;
    v.assign(n,false);
    g.assign(n,vector<ll>());

    for( ll i = 0 ; i < n ; i++ )
    {
        cin>>a>>b;
        edge(a,b);
    }
    for( ll i = 0 ; i < n ; i++ )
    {
        if(!v[i])
            bfs(i);
    }

    return 0;
}
