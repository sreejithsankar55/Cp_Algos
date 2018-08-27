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
ll wordcount(string s)
{
	stringstream st(s);
	string word;
	
	ll count=0;
	while(st >> word)
		count++;
	return count;
}
ll convert_to_int(string t)
{
	stringstream st(t);
	ll x=0;
	st >> x;
	
	return x;

}
string spaceremove(string r)
{
	stringstream st;
	string temp;
	
	st<<r;
	
	while(!st.eof())
	{
		st>>temp;
		r=r+temp;
	}
	
	return r;
}
int main()
{
	/*count number of words in a string*/
	string s;
	getline(cin,s);
	cout<<"Number of entered words"<<endl;
	cout<<wordcount(s);
	cout<<endl;
	
	/*convert a string to an integer*/
	string t="12345";
	cout<<"Converted to int"<<convert_to_int(t);
	cout<<endl;
	
	/*remove spaces in a string*/
	string r;
	cout<<"Enter a string to remove spaces"<<endl;
	getline(cin,r);
	cout<<"String with removed spaces"<<spaceremove(r);
	
	return 0;
	
} 
