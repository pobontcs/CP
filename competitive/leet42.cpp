#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<map>
#include<stack>
#include<vector>
#include<set>
#define ll long long int 
#define ss string
#define ios ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;


int rain_water(vector<ll> &a){

    stack<ll> st;

    ll n=a.size();ll ans=0;
    for(ll i=0;i<n;i++){
        while(!st.empty() and a[st.top()]<a[i]){
            ll cur=st.top();
            st.pop();
            if(st.empty()) break;

            ll diff=i- st.top()-1;

            ans+=min(a[st.top()],a[i])-a[cur];
            ans*=diff;
        }
        st.push(i);
    }

    return ans;
}


int_fast32_t main()
{

    vector<ll> a={0,1,0,2,1,0,1,3,2,1,2,1};

    cout<<rain_water(a)<<endl;


    return 0;
}
