#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
typedef tree<int, null_type, less<int>, rb_tree_tag,tree_order_statistics_node_update> OS;
typedef tree<int, null_type, less_equal<int>, rb_tree_tag,tree_order_statistics_node_update> OMS;

const int   N                               = (int) 1e6+5;
const int   M                               = (int) 1e9+5;
const int   mod                             = (int) 1000000007;
const int   max_prime                       = (int) 1e6+3;
const int   BLKs                            = (int) 70000;
const int   BLKspan                         = (int) 700;

#define ll                                  long long int
#define Faster                              ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);




int main(){
    Faster;
    int t;                      cin>>t;
    while(t--){
        int n;                  cin>>n;
        vector<int> a(n);
        int mn=INT_MAX,mx=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mn=min(mn,a[i]);
            mx=max(mx,a[i]);
        }

        int mnCnt=0,mxCnt=0;
        for(int i=0;i<n;i++){
            if(a[i]==mn){
                mnCnt++;
            }
            if(a[i]==mx){
                mxCnt++;
            }
        }

        ll ans;
        if(mn==mx){
            ans = (mnCnt*(mnCnt-1));
        }
        else{
            ans = 2LL*(mnCnt*(mxCnt));
        }

        cout<<ans<<endl;
    }
    return 0;
}
