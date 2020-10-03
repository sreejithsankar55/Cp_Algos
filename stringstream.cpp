/* (: Sreejith Codes :) */

#include    <bits/stdc++.h>

#define 	ll 	long long
#define 	ld 	long double
#define 	pb 	push_back
#define 	ff 	first
#define 	ss 	second
#define 	mp 	make_pair
#define 	mod     1000000007
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

    r= ""; //making the string empty mandatory step

    while(!st.eof())
    {
        st>>temp;
        r=r+temp;
    }

    return r;
}
void word_freq(string sr)
{
    map < string, ll> ma;
    stringstream st(sr);
    string temp;
    while(st >> temp)
        ma[temp]++;
    map < string,ll >::iterator it;
    for(it=ma.begin(); it!=ma.end(); it++)
        cout<<it->ff<<" -> "<<it->ss<<endl;
}
int main()
{
    /*count number of words in a string*/
    string s;
    cout<<"Enter a string";
    getline(cin,s);
    cout<<"Number of entered words"<<endl;
    cout<<wordcount(s);
    cout<<endl;

    /*convert a string to an integer*/
    string t="12345";
    cout<<"Converted to int"<<convert_to_int(t);
    cout<<endl;

    /*remove spaces in a string*/
    string str;
    cout<<"Enter a string to remove spaces"<<endl;
    getline(cin,str);
    cout<<"String with removed spaces"<<endl<<spaceremove(r);
    cout<<endl;
    /*print frequency of a string*/
    cout<<"Enter a string to find frequency of each words"<<endl;
    string sr;
    getline(cin,sr);
    word_freq(sr);
    return 0;

}
