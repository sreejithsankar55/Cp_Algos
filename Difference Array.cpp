/* (: Sreejith Codes :) */
//Difference array Range Update Query in O(1)
//Geeksforgeeks
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
void fast(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
vector < ll > initia_Diff_Array(vector < ll >& A)
{
	ll A_size = A.size();
	
	//Extra space mandatory so n+1 not n
	vector < ll > D(A_size+1);
	
	D[0] = A[0], D[A_size] = 0; //Assigning n+1th element as 0
	for ( ll i = 1 ; i < A_size ; i++)
		D[i] = A[i]	- A[i-1];
	return D;
}
void update(vector < ll >& D,ll l,ll r,ll x)
{
	D[l] += x;
	D[r+1] -= x; // r+1(one) not r+l
}
void modifyA_n_print(vector<ll>& A,vector < ll >& D)
{
	ll A_size = A.size();
	
	for (ll i = 0 ; i < A_size ; i++)	{
		if(i==0)
			A[i] = D[i];
		else
			A[i] = D[i] + A[i-1];
		cout<<A[i]<<" ";
	}
}
int main()
{	
	//As we included fast give all input at once
	//dont care of the cout statements between and dont use fast()
	//while testing locally
	fast();
	ll n,q;
	cin>>n;
	vector < ll >A(n);
	cout<<"\nEnter the elements";
	for ( ll i = 0 ; i < n ; i++)
		cin>>A[i];
	vector < ll > D = initia_Diff_Array(A);
	
	cout<<"Enter number of queries to update";
	cin>>q;
	
	while(q--)
	{
		ll p,q,val;
		cout<<"\nEnter 0 based index range to update";
		cin>>p>>q;
		cout<<"\nEnter the value to get updated in the given range";
		cin>>val;
		update(D,p,q,val);
	}
	cout<<"\nResultant array after updation is :\n";
	modifyA_n_print(A,D);
	
	return 0;
	
} 
