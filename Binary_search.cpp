/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod 1000000007
#define 	pi 	3.141592653589793

using namespace std;
ll bin_sear(vector < ll >&v , ll l,ll r, ll x)
{
    while(l <=r )
    {
        ll m = l + (r-l)/2;

        if(v[m]==x)
            return m;
        else if(v[m]<x)
            l = m + 1;
        else
            r = m-1;
    }

    return -1;
}
int main()
{

    ll n;
    cin>>n;
    vector < ll > v(n);
    for ( ll i = 0 ; i < n ; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end()); //mandatory
    ll x;
    cout<<"Enter element to be searched for \n";
    cin>>x;
    ll index=bin_sear(v,0,n-1,x);
    (index==-1)?cout<<"Element not present":cout<<"Found at :"<<index;
    return 0;

}
