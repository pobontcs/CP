#include<bits/stdc++.h>

#define ll long long int

using namespace std;
vector<int>globl(100,1);
void solve() {

   ll l,r;cin>>l>>r;

   ll cnt=0;
   for(int i=l;i<=r;i++){
            if(i%2==0) cnt++;
   }
   cout<<cnt<<endl;



}

int main() {
     int t; cin >> t;
    while(t--) {
solve();
    }
}





















