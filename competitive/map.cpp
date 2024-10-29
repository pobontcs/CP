#include<bits/stdc++.h>
#include<iostream>
#include<map>
#include<algorithm>
#include<string>

using namespace std;

int main()
{
    int n;cin>>n;
    map<int , string>mp;
        int x=0;
    for (int i=0;i<n;i++)
    {
        cout<<"Id"<<0<<" ";
        int id;
        string name;
        cin>>name>>id;
        mp[id]=name;

    }
    map<int , string> ::iterator it=mp.begin();

    while(it!=mp.end())
    {
        cout<<it->first<<endl;
        cout<<it->second<<endl;
        cout<<"\n\n";
        ++it;
    }


return 0;
}