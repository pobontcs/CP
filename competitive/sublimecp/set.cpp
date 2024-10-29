#include<bits/stdc++.h>
#include<set>
#include<string>
using namespace std;

int main()
{
	set<int>s1;//initialization

	s1.insert(4);
	s1.insert(1);
	s1.insert(2);
	s1.insert(1);
	s1.insert(3);

	for(auto i: s1){
		cout<<i<<endl;
	}
	set<string>s2;
	s2.insert("POBO");
	s2.insert("ROBO");
	s2.insert("rOBO");
	s2.insert("POBO");
	for(auto i: s2){
		cout<<i<<endl;
	}
	set<int,greater<int>>s3(s1.begin(),s1.end());
	for(auto j:s3){
		cout<<j<<" ";
	}

			

	
	

}