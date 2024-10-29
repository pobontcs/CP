
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){


                    vector<ll>arr(5);
                    for(auto &m:arr) cin>>m;
                    sort(arr.begin(),arr.end());
                    int res=0;
                    for(int i=0;i<4;i++){
                        res+=arr[i];
                    }

                    cout<<res<<" ";
                    res=res+arr[4]-arr[0];

                    cout<<res<<endl;


}
