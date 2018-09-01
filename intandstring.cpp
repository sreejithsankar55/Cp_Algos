#include <bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;

int main()
 {
	 ll t;
	 cin>>t;
	 vector < string > org;
	 string str="government college of engineering & textile technology berhampore";
	 stringstream s(str); 
     string word; 
	 
     while (s >> word)
          org.pb(word);
	 scanf(" "); // important
	 while(t--)
	 {
		 string ss;
		 ll co=0,h,f=0;
		 getline(cin,ss);
		 
		 transform(ss.begin(),ss.end(), ss.begin(), ::tolower);
		 vector < string > v;
		 
		 stringstream st(ss); 
         string word1; 
		
         while (st >> word1)
          v.pb(word1);
         
		 for(ll i = 0 ; i < v.size(); i++)
		 {
			 co=0;
			 
				h=(v[i].size()/2)+1;
			 
				//cout<<v[i]<<" "<<org[i]<<endl;
			 for(ll j = 0 ; j < v[i].size() ; j++ )
			 {
				if(v[i][j]!=org[i][j])
				{
					co++;
					if(co>h)
					{
					    //cout<<v[i][j]<<" "<<org[i][j];
						f=1;
						break;
					}
				}
			}
		}
		if(f==1)
			cout<<"reject"<<endl;
		else
			cout<<"accept"<<endl;
	 }
	  return 0;
  }
