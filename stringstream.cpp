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
int main()
{
	/*count number of words in a string*/
	string s;
	getline(cin,s);
	cout<<"Number of entered words"<<endl;
	cout<<wordcount(s);
	
	/*convert a string to an integer*/
	string t="12345";
	cout<<"COnverted to int"<<convert_to_int(t);
	
	
	return 0;
	
} 
